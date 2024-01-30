/*write a program to declare a class
employee with id,name and pan_number.
 Give the default value to the pan_number as "Not Available".
 Make a member function get() which takes 3 arguments as id ,name and pan_number
 and give dafult value to pan_number. Print the result for 2 employees*/

using namespace std;
#include<iostream>
class employee
{
    int id;
    string name,pan;
public:
    void get(int i,string n,string p="not available")
    {
 id=i;
 name=n;
 pan=p;
    }
    void show()
    {
     cout<<endl<<id<<" "<<name<<" "<<pan;
    }
};
int main()
{
    employee e1,e2;
    e1.get(1,"mohit");
    e1.show();
    e2.get(2,"rohit","abcd");
    e2.show();
}
