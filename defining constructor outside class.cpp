// Defining the constructor outside the class
// Syntax of defining the constructor outside the class is
// class_name :: constructor(arguments){ }
using namespace std;
#include<iostream>
class rectangle
{
double l,b;
public:
rectangle (double l,double b);
void area();
};
rectangle :: rectangle(double l ,double b)
{
this->l=l;
this->b=b;
}
void rectangle :: area()
{
cout<<"Area is "<<l*b;
}
int main()
{
rectangle r(12.34,56.78);
r.area();
}
