#include<iostream>
class A {
public:
	 void fun1()
	{
		std::cout << "\nbase class";
	}
	virtual void fun2()
	{

		std::cout << "\nbase class2";
	}
	virtual void fun3()
	 {
		 std::cout << "\nbase class3";

	 }
	void print()
	{
		std::cout << "\nbase class function";
	}
};
class B :public A
{
public:
	void fun1()
	{
		std::cout << "\nderived class";
	}
	
	void fun2(int a)
	{

		std::cout << "\nderived class2";
	}
	void fun3()
	{
		std::cout << "\nderived class3";

	}
	void fun4()
	{
		std::cout << "\nfunction 4";
	}
};
int main()
{

	A a ,*ptr,*ptr1;
	B b;
	/*a.fun1();
	b.fun1();
	a.fun2();
	b.fun2(2);
	*/
	ptr = &a;
	ptr1 = &b;
	ptr->fun1();
	ptr1->fun1();	//eraly binding... calling function of base class;
	ptr1->fun2();
//	ptr1->fun2(3);	//gives an error
	ptr1->fun3();	// dynamic binding ... calling derived class function;
	//ptr1->fun4();	//gives error
	//b.fun4();
	ptr1->print();
	return 0;
}
