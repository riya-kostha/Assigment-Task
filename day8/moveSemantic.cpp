#include<iostream>
#include<stdlib.h>
#include<iostream>
#include<string>
class String
{		
public:
	int* ptr=nullptr;
	int var=0;

	String& operator =( const String &obj)
	{
		
		ptr = obj.ptr;
		return *this;
	}
	String& operator=(String&& obj)
	{
		std::cout << "inside move\n";

		if (this != &obj) {
	
			
			ptr = obj.ptr;
			obj.ptr = nullptr;
			return *this;
		}
	}
	String(int i)
	{
		
		ptr = new int(i);

	}
	void print()
	{		
		if (ptr  != nullptr)
		{
			std::cout << *ptr << std::endl;

		}
		else {
			std::cout << "deleted "<<std::endl;
		}
	
	}

};
int main()
{

	String a(210);
	String b(350);
	a.print();
	b.print();
	std::cout << "normal copy\n";
	b = a;
	a.print();
	b.print();
	std::cout << "move object \n";
	b = std::move(a);
	a.print();
	b.print();
	return 0;
}