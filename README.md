# CxxPrimerPlus

This is my implementation of the exercises in the book 'C++ Primer Plus'.


All source codes were developed using emacs and compiled by g++ 4.1.2 in CentOS (2.6.18-128.e15PAE).


# Chapter 1 GETTING STARTED


NO Programming Exercises


# Chapter 2 SETTING OUT TO C++

	1. Write a C++ program that displays your name and address.
	2. Write a C++ program that asks for a distance in furlongs and converts it to yards. (One
	furlong is 220 yards.)
	3. Write a C++ program that uses three user-defined functions (counting main() as one)
	and produces the following output:
		Three blind mice
		Three blind mice
		See how they run
		See how they run
	One function, called two times, should produce the first two lines, and the remaining
	function, also called twice, should produce the remaining output.
	4. Write a program that has main() call a user-defined function that takes a Celsius temperature
	value as an argument and then returns the equivalent Fahrenheit value. The program
	should request the Celsius value as input from the user and display the result, as
	shown in the following code:
		Please enter a Celsius value: 20
		20 degrees Celsius is 68 degrees Fahrenheit.
	For reference, here is the formula for making the conversion:
	Fahrenheit = 1.8 x degrees Celsius + 32.0
	5. Write a program that has main() call a user-defined function that takes a distance in
	light years as an argument and then returns the distance in astronomical units. The program
	should request the light year value as input from the user and display the result, as
	shown in the following code:
		Enter the number of light years: 4.2
		4.2 light years = 265608 astronomical units.
	An astronomical unit is the average distance from the earth to the sun (about
	150,000,000 km or 93,000,000 miles), and a light year is the distance light travels in a
	year (about 10 trillion kilometers or 6 trillion miles). (The nearest star after the sun is
	about 4.2 light years away.) Use type double (as in Listing 2.4) and this conversion
	factor:
		1 light year = 63,240 astronomical units
	6. Write a program that asks the user to enter an hour value and a minute value. The
	main() function should then pass these two values to a type void function that displays
	the two values in the format shown in the following sample run:
		Enter the number of hours: 9
		Enter the number of minutes: 28
		Time: 9:28
		
# Chapter 3 DEALING WITH DATA	
	
	1. Write a short program that asks for your height in integer inches and then converts your
	height to feet and inches. Have the program use the underscore character to indicate
	where to type the response. Also, use a const symbolic constant to represent the conversion
	factor.
	2. Write a short program that asks for your height in feet and inches and your weight in
	pounds. (Use three variables to store the information.) Have the program report your
	body mass index (BMI). To calculate the BMI, first convert your height in feet and inches
	to your height in inches (1 foot = 12 inches). Then, convert your height in inches to
	your height in meters by multiplying by 0.0254. Then, convert your weight in pounds
	into your mass in kilograms by dividing by 2.2. Finally, compute your BMI by dividing
	your mass in kilograms by the square of your height in meters. Use symbolic constants
	to represent the various conversion factors.
	3. Write a program that asks the user to enter a latitude in degrees, minutes, and seconds
	and that then displays the latitude in decimal format. There are 60 seconds of arc to a
	minute and 60 minutes of arc to a degree; represent these values with symbolic constants.
	You should use a separate variable for each input value. A sample run should
	look like this:
		Enter a latitude in degrees, minutes, and seconds:
		First, enter the degrees: 37
		Next, enter the minutes of arc: 51
		Finally, enter the seconds of arc: 19
		37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
	4. Write a program that asks the user to enter the number of seconds as an integer value
	(use type long) and that then displays the equivalent time in days, hours, minutes, and
	seconds. Use symbolic constants to represent the number of hours in the day, the num-
	ber of minutes in an hour, and the number of seconds in a minute. The output should
	look like this:
		Enter the number of seconds: 31600000
		31600000 seconds = 365 days, 46 minutes, 40 seconds
	5. Write a program that asks how many miles you have driven and how many gallons of
	gasoline you have used and then reports the miles per gallon your car has gotten. Or, if
	you prefer, the program can request distance in kilometers and petrol in liters and then
	report the result European style, in liters per 100 kilometers.
	6. Write a program that asks you to enter an automobile gasoline consumption figure in the
	European style (liters per 100 kilometers) and converts to the U.S. style of miles per gallon.
	Note that in addition to using different units of measurement, the U.S approach
	(distance / fuel) is the inverse of the European approach (fuel / distance). Note that 100
	kilometers is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19 mpg is about 12.4 l/100
	km, and 27 mpg is about 8.7 l/100 km.

# Chapter 4 COMPOUND TYPES

	1. Write a C++ program that requests and displays information as shown in the following
	example of output:
		What is your first name? Betty Sue
		What is your last name? Yew
		What letter grade do you deserve? B
		What is your age? 22
		Name: Yew, Betty Sue
		Grade: C
		Age: 22
	Note that the program should be able to accept first names that comprise more than one
	word. Also note that the program adjusts the grade downward¡ªthat is, up one letter.
	Assume that the user requests an A, a B, or a C so that you don¡¯t have to worry about the
	gap between a D and an F.
	2. Rewrite Listing 4.4, using the C++ string class instead of char arrays.
	3. Write a program that asks the user to enter his or her first name and then last name, and
	that then constructs, stores, and displays a third string, consisting of the user¡¯s last name
	followed by a comma, a space, and first name. Use char arrays and functions from the
	cstring header file. A sample run could look like this:
		Enter your first name: Flip
		Enter your last name: Fleming
		Here¡¯s the information in a single string: Fleming, Flip
	4. Write a program that asks the user to enter his or her first name and then last name, and
	that then constructs, stores, and displays a third string consisting of the user¡¯s last name
	followed by a comma, a space, and first name. Use string objects and methods from the
	string header file. A sample run could look like this:
		Enter your first name: Flip
		Enter your last name: Fleming
		Here¡¯s the information in a single string: Fleming, Flip
	5. The CandyBar structure contains three members. The first member holds the brand
	name of a candy bar. The second member holds the weight (which may have a fractional
	part) of the candy bar, and the third member holds the number of calories (an integer
	value) in the candy bar. Write a program that declares such a structure and creates a
	CandyBar variable called snack, initializing its members to ¡°Mocha Munch¡±, 2.3, and
	350, respectively. The initialization should be part of the declaration for snack. Finally,
	the program should display the contents of the snack variable.
	6. The CandyBar structure contains three members, as described in Programming Exercise
	5. Write a program that creates an array of three CandyBar structures, initializes them to
	values of your choice, and then displays the contents of each structure.
	7. William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following
	information:
		The name of the pizza company, which can consist of more than one word
		The diameter of the pizza
		The weight of the pizza
	Devise a structure that can hold this information and write a program that uses a structure
	variable of that type. The program should ask the user to enter each of the preceding
	items of information, and then the program should display that information. Use cin
	(or its methods) and cout.
	8. Do Programming Exercise 7, but use new to allocate a structure instead of declaring a
	structure variable. Also, have the program request the pizza diameter before it requests
	the pizza company name.
	9. Do Programming Exercise 6, but, instead of declaring an array of three CandyBar structures,
	use new to allocate the array dynamically.

# Chapter 5 LOOPS AND RELATIONAL EXPRESSIONS


# Chapter 6 BRANCHING STATEMENTS AND LOGICAL OPERATORS


# Chapter 7 FUNCTIONS: C++'S PROGRAMMING MODULES


# Chapter 8 ADVENTURES IN FUNCTIONS


# Chapter 9 MEMORY MODELS AND NAMESPACES


# Chapter 10 OBJECTS AND CLASSES


# Chapter 11 WORKING WITH CLASSES


# Chapter 12 CLASSES AND DYNAMIC MEMORY ALLOCATION


# Chapter 13 CLASS INHERITANCE


# Chapter 14 REUSING CODE IN C++


# Chapter 15 FRIENDS, EXCEPTIONS, AND MORE


# Chapter 16 THE string CLASS AND THE STANDARD TEMPLATE LIBRARY


# Chapter 17 INPUT, OUTPUT, AND FILES