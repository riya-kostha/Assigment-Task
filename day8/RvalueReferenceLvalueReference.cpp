#include<iostream>
#include<stdlib.h>

class A {

public:
    int a;
    static A instance;

    // this is returning a reference to a static var, hence it's returning an lvalue
    static A& getInst() { return instance; }

    // but this is not returning a reference to instance, but rather a temporary copy 
    // of instance, hence it's returning an rvalue
    static A getInstCopy() { return instance; }

    A()
    {
        a = 1;
    }
};
A A::instance;
int main()
{
    A &inst1 = A::getInst();

    std::cout<< inst1.a;


    //A&& inst2 = A::getInst(); // COMPILE ERR: we can't assign a reference to an rvalue reference


    A  inst2 = A::getInstCopy(); // ok - we've fetched a copy of the instance
    std::cout << inst2.a;
    A&& inst3 = A::getInstCopy();
}
