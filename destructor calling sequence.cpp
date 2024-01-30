// Destructor calling sequence

#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"In base class constructor\n";
		}
		~A()
		{
			cout<<"In base class destructor\n";
		}
};
class B : public A
{
	public:
		B()
		{
			cout<<"In derived class constructor\n";
		}
		~B()
		{
			cout<<"In derived class destructor\n";
		}
};
int main()
{
	B ob;

}
