
countLine <- function(sourcefile) {
    ## read source code
    x <- readLines(sourcefile)
    ## remove blank line
    x <- x[x!=""]

    ## remove comment line of start from //
    idx <- grep("^\\s*//", x)
    if(length(idx)) {
        x <- x[-idx]
    }

    ## counting c++ source code
    ## start from the first #include line.
    start <- grep("#include", x)[1]

    n <- length(x) - start + 1
    return(n)
}


folders <- paste("chapter", c(2:17), sep="")
allLen <- rep(0, length(folders))
names(allLen) <- folders
for (i in seq_along(folders)) {
    files <- list.files(folders[i], pattern="cpp$")
    len <- 0
    for (f in files) {
        file <- paste(folders[i], "/", f, sep="")
        len <- len + countLine(file)
    }
    allLen[i] <- len
}

barplot(allLen,
        main=paste("Total Lines", sum(allLen)),
        col=rainbow(length(allLen)))
