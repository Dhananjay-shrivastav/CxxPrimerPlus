# Chapter 16 THE string CLASS AND THE STANDARD TEMPLATE LIBRARY

	1. A palindrome is a string that is the same backward as it is forward. For example, "tot"
	and "otto" are rather short palindromes. Write a program that lets a user enter a string
	and that passes to a bool function a reference to the string. The function should return
	true if the string is a palindrome and false otherwise. At this point, don"t worry about
	complications such as capitalization, spaces, and punctuation. That is, this simple version
	should reject "Otto" and "Madam, I"m Adam." Feel free to scan the list of string
	methods in Appendix F for methods to simplify the task.
	2. Do the same problem as given in Programming Exercise 1, but do worry about complications
	such as capitalization, spaces, and punctuation. That is, "Madam, I"m Adam"
	should test as a palindrome. For example, the testing function could reduce the string to
	"madamimadam" and then test whether the reverse is the same. Don"t forget the useful
	cctype library. You might find an STL function or two useful although not necessary.
	3. Redo Listing 16.3 so that it gets it words from a file. One approach is to use a
	vector<string> object instead of an array of string. Then you can use push_back() to
	copy how ever many words are in your data file into the vector<string> object and use
	the size() member to determine the length of the word list. Because the program
	should read one word at a time from the file, you should use the >> operator rather than
	getline(). The file itself should contain words separated by spaces, tabs, or new lines.
	4. Write a function with an old-style interface that has this prototype:
		int reduce(long ar[], int n);
	The actual arguments should be the name of an array and the number of elements in the
	array. The function should sort an array, remove duplicate values, and return a value
	equal to the number of elements in the reduced array. Write the function using STL
	functions. (If you decide to use the general unique() function, note that it returns the
	end of the resulting range.) Test the function in a short program.
	5. Do the same problem as described in Programming Exercise 4, except make it a template
	function:
		template <class T>
		int reduce(T ar[], int n);
	Test the function in a short program, using both a long instantiation and a string
	instantiation.
	6. Redo the example shown in Listing 12.15, using the STL queue template class instead of
	the Queue class described in Chapter 12.
	7. A common game is the lottery card. The card has numbered spots of which a certain
	number are selected at random. Write a Lotto() function that takes two arguments. The
	first should be the number of spots on a lottery card, and the second should be the
	number of spots selected at random. The function should return a vector<int> object
	that contains, in sorted order, the numbers selected at random. For example, you could
	use the function as follows:
		vector<int> winners;
		winners = Lotto(51,6);
	This would assign to winners a vector that contains six numbers selected randomly from
	the range 1 through 51. Note that simply using rand() doesn"t quite do the job because
	it may produce duplicate values. Suggestion: Have the function create a vector that contains
	all the possible values, use random_shuffle(), and then use the beginning of the
	shuffled vector to obtain the values. Also write a short program that lets you test the
	function.
	8. Mat and Pat want to invite their friends to a party. They ask you to write a program that
	does the following:
		 Allows Mat to enter a list of his friends" names. The names are stored in a container
		and then displayed in sorted order.
		 Allows Pat to enter a list of her friends" names. The names are stored in a second
		container and then displayed in sorted order.
		 Creates a third container that merges the two lists, eliminates duplicates, and displays
		the contents of this container.