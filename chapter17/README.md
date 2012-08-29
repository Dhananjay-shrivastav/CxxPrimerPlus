# Chapter 17 INPUT, OUTPUT, AND FILES

	1. Write a program that counts the number of characters up to the first $ in input and that
	leaves the $ in the input stream.
	2. Write a program that copies your keyboard input (up to the simulated end-of-file) to a
	file named on the command line.
	3. Write a program that copies one file to another. Have the program take the filenames
	from the command line. Have the program report if it cannot open a file.
	4. Write a program that opens two text files for input and one for output. The program
	should concatenate the corresponding lines of the input files, use a space as a separator,
	and write the results to the output file. If one file is shorter than the other, the remaining
	lines in the longer file should also be copied to the output file. For example, suppose the
	first input file has these contents:
		eggs kites donuts
		balloons hammers
		stones
	And suppose the second input file has these contents:
		zero lassitude
		finance drama
	The resulting file would have these contents:
		eggs kites donuts zero lassitude
		balloons hammers finance drama
		stones
	5. Mat and Pat want to invite their friends to a party, much as they did in Programming
	Exercise 8 in Chapter 16, except now they want a program that uses files. They have
	asked you to write a program that does the following:
		 Reads a list of Mat"s friends" names from a text file called mat.dat, which lists one
		friend per line. The names are stored in a container and then displayed in sorted
		order.
		 Reads a list of Pat"s friends" names from a text file called pat.dat, which lists one
		friend per line. The names are stored in a container and then displayed in sorted
		order.
		 Merges the two lists, eliminating duplicates, and stores the result in the file
	matnpat.dat, one friend per line.
	6. Consider the class definitions of Programming Exercise 5 in Chapter 14. If you haven"t
	yet done that exercise, do so now. Then do the following:
	Write a program that uses standard C++ I/O and file I/O in conjunction with data of
	types employee, manager, fink, and highfink, as defined in Programming Exercise 5 in
	Chapter 14. The program should be along the general lines of Listing 17.17 in that it
	should let you add new data to a file. The first time through, the program should solicit
	data from the user, show all the entries, and save the information in a file. On subsequent
	uses, the program should first read and display the file data, let the user add data,
	and show all the data. One difference is that data should be handled by an array of
	pointers to type employee. That way, a pointer can point to an employee object or to
	objects of any of the three derived types. Keep the array small to facilitate checking the
	program; for example, you might limit the array to 10 elements:
		const int MAX = 10; // no more than 10 objects
		...
		employee * pc[MAX];
	For keyboard entry, the program should use a menu to offer the user the choice of which
	type of object to create. The menu should use a switch to use new to create an object of
	the desired type and to assign the object"s address to a pointer in the pc array. Then that
	object can use the virtual setall() function to elicit the appropriate data from the user:
		pc[i]->setall(); // invokes function corresponding to type of object
	To save the data to a file, devise a virtual writeall() function for that purpose:
		for (i = 0; i < index; i++)
			pc[i]->writeall(fout);// fout ofstream connected to output file