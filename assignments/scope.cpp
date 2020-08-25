#include<iostream>

int a = 100;

int main()
{

	int a = 20;
	{

		int a = 30;
		int y = a;
		int z = ::a;
		std::cout <<"Value of y "<< y;
		std::cout <<"Value Of z"<< z;
		std::cout << a;
	}

	std::cout << "value of a "<<a;
	return 0;
}


