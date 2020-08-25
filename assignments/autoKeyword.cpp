#include<iostream>

int sum(int a, int b)
{

	return a + b;
}


int main()
{

		
	auto b = 12.78888;
	auto a = 'A';
	auto d=100;
	decltype (sum(2, 3)) x;
	std::cout <<"type of x"<< typeid(x).name();
	//std::endl;
	std::cout << "type of a" << typeid(a).name();
	//std::cout << "value of a"<<a;
	//std::cout << "    value if b"<<b;
	//std::cout << " value of c   " << d;
	return 0;
}


