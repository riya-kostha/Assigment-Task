#include<iostream>

class A {


/*
private:
	A()
	{
		std::cout << "constructor invoke";
	}
	*/
public:
	int x;
	A()
	{
		std::cout << "constructor invoke\n";
	}
	A(int a)
	{
		x = a;
	}

	void print()
	{
		std::cout << "value of x\n" << x;

	}

};
int  main()
{
	
	A obj,obj1; // give an errror bcs we cant create object without consructor;
	obj.x = 90;
	obj.print();
	A obj2 = A(2);
	obj2.print();
	return 0;
}