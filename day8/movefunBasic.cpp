#include<iostream>
#include<stdlib.h>
#include<iostream>
void fun(int& ref) {


	std::cout << "lvalue";
}
void fun(int&& ref) {


	std::cout << "\nrvalue";
}

void fun(const int& ref) {


	std::cout << "\nconstvalue";
}

int main()
{

	int var = 7;

	fun(var);
	fun(8);
	fun(7);	//if we comment out rvalue faunction it will call const ref function
	fun(std::move(var));	//it will call rvalue function 
	std::cout << "------------";
	fun(static_cast <int &&>(var));
	return 0;
}