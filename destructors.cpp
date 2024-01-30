// Destructors
using namespace std;
#include<iostream>
class abc
{
public:
abc()// constructor
{
cout<<"Constructor called\n";
}
~abc()//destructor
{
cout<<"Destructor called\n";
}
};
int main()
{
abc ob1,ob2;
}
