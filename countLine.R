
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

	if (is.na(start)) {
		## header file
		return (length(x))
	}
    n <- length(x) - start + 1
    return(n)
}


folders <- paste("chapter", c(2:18), sep="")
allLen <- rep(0, length(folders))
names(allLen) <- folders
for (i in seq_along(folders)) {
    cpp_files <- list.files(folders[i], pattern=".cpp$")
	header_files <- list.files(folders[i], pattern=".h$")
	files <- c(cpp_files, header_files)
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
