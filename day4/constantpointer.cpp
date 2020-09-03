#include<iostream>

const int sum(const int a, const int b){

	return a*2 + b*2;
}

void change(int *const p)
{
	std::cout << "\nvalue is" << *p;

	std::cout << "\nmodified value is" << ++(*p);

}
void constValueModify(const int* p)
{

	std::cout << "\nsecond value is" << *p;
//	std::cout << "modifed value is" << ++(*p); this line will give error;

	int b = 34;
	p = &b;
	std::cout << "\npointer can point another value" << *p;
}
int main()
{

	const int a=10;
	int b = 20;	
	const	int * p = &a;
	
	//std::cout << ++(*p); // this will give an error bcs p pointer is poining to constatt integer which can not be modified through pointer;

//	a = 30; // but we cant directly modified a if it is not constatnt

	//int c = sum(2, 3);

	//std::cout << "sum is" << c;

	change(&b);
	constValueModify(&a);

	
	
	return 0;
}
