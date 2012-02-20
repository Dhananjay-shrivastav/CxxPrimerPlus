
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
allLen <- c()
for (folder in folders) {
    files <- list.files(folder, pattern="cpp")
    len <- 0
    for (i in files) {
        file <- paste(folder, "/", i, sep="")
        len <- len + countLine(file)
    }
    allLen <- c(allLen, len)
}

names(allLen) <- folders
barplot(allLen,
        main=paste("Total Lines", sum(allLen)),
        col=rainbow(length(allLen)))
