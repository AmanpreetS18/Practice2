// Inheritance
// Constructor calling sequence
// Default constructor in single level inheritance
#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Base class constructor called\n";
		}
};
class B : public A
{
	public:
		B()
		{
			cout<<"Derived class constructor called\n";
		}
};
int main()
{
	B ob;
}
