#include<iostream>

void foo(const int& x)
{
	std::cout <<"\nvalue of x" << x;
	//x++;  // this line will give error bcs x is a constant value;
	std::cout << "\nvalue after increament" << x;
}


int main()
{


/*
	//reference variablex;

	int a = 30;
	int b = 100;
	int& ref = a;
	std::cout << ref;
	ref++;
	std::cout << "\nincreament value is" << ref;

	std::cout << "\naddress of a=" << &a;
	std::cout << "\naddress of ref=" << &ref;

	foo(a);
	
//	int& ref1 = 3; // error we cant assign R value to a reference;

	int* ptr = &b;

//	int& ref2 = ptr; ///this will predict error bcs we are trying to assign address of b in ref2;

	int& ref2 = *ptr;
	std::cout << "\nvalue throught pointer" << ++ref2;

	ptr = &ref;

	std::cout << "\npointer value is" << ++(*ptr);
	*/
	//int x;
	
	return 0;
}
