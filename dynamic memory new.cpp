// Dynamic memory allocation
// we will use new operator for dynamic memory allocation
// Syntax of new
/* data_type *var;
var = new data_type[n];*/
#include <iostream>
using namespace std;
int main()
{
	int *a,i,n;
	cout<<"Enter the number of elements\n";
	cin>>n;
	a = new int[n];
	// a[0],a[1],a[2]....a[n-1]

	cout<<"Enter the elements of array\n";
	for(i=0;i<=n-1;i++)
	cin>>a[i];

	cout<<"Array is \n";
	for(i=0;i<=n-1;i++)
	cout<<a[i]<<" ";
}
