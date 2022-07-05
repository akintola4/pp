#include <iostream>
using namespace std;
main()
{
	int x,y,z;
	int sum,product;
	double average;
	cout<< "Enter three integer values"<<endl;
	cin>>x;
	cin>>y;
	cin>>z;
	sum=x+y+z;
	average=sum/3;
	product=x*y*z;
	cout<<"The sum is = "<<sum<<endl;
	cout<<"The average is = "<<average<<endl;
	cout<<"The product is = "<<product;
}
