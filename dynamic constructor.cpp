// dynamic constructor
using namespace std;
#include<iostream>
class abc
{
int *a;
public:
abc()// dynamic constrcutor
{
a = new int[5] {11,12,53,74,85};
int i;
for(i=0;i<=4;i++)
cout<<a[i]<<" ";
cout<<"\n";
}
};
int main()
{
abc *p = new abc[3];// dynamic object
}
