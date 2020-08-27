#include<iostream>
#include"fun.h";
#include"fun.h";
void fun()
{	
	sum(12, 23);


	std::cout << "hello";
}
int main()
{
	
	fun();  //in this code i used header files "fun.h" two times  complier will give error multipule defination of sum() function bcs i dont use #programa once 


	return 0;
}


