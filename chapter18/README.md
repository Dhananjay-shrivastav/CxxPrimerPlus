# Chapter 18 Visiting with the New C++ Standard

	1. Here is part of a short program:
	int main()
	{
		using namespace std;
		// list of double deduced from list contents
		auto q = average_list({15.4, 10.7, 9.0});
		cout << q << endl;
		// list of int deduced from list contents
		cout << average_list({20, 30, 19, 17, 45, 38} ) << endl;
		// forced list of double
		auto ad = average_list<double>({'A', 70, 65.33});
		cout << ad << endl;
		return 0;
	}
	Complete the program by supplying the average_list() function. It should be a
	template function, with the type parameter being used to specify the kind of
	initialized_list template to be used as the function parameter and also to give
	the function return type.
	2. Here is declaration for the Cpmv class:
	class Cpmv
	{
		public:
		struct Info
	{
		std::string qcode;
		std::string zcode;
	};
		private:
		Info *pi;
		public:
		Cpmv();
		Cpmv(std::string q, std::string z);
		Cpmv(const Cpmv & cp);
		Cpmv(Cpmv && mv);
		~Cpmv();
		Cpmv & operator=(const Cpmv & cp);
		Cpmv & operator=(Cpmv && mv);
		Cpmv operator+(const Cpmv & obj) const;
		void Display() const;
	};
	The operator+() function should create an object whose qcode and zcode members
	concatenate the corresponding members of the operands. Provide code that
	implements move semantics for the move constructor and the move assignment
	operator.Write a program that uses all the methods. For testing purposes, make the
	various methods verbose so that you can see when they are used.
	3. Write and test a variadic template function sum_values() that accepts an arbitrarily
	long list of arguments with numeric values (they can be a mixture of types) and
	returns the sum as a long double value.
	4. Redo Listing 16.5 using lambdas. In particular, replace the outint() function with
	a named lambda and replace the two uses of a functor with two anonymous lambda
	expressions.
	