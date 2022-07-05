#include <iostream>
using namespace std;
main()
{
	int x,y,z,sum;
	double average;
	cout<< "Enter three integer values"<<endl;
	cin>>x;
	cin>>y;
	cin>>z;
	sum=x+y+z;
	average=sum/3;
	cout<<"The sum is = "<<sum<<endl;
	cout<<"The average is = "<<average;
}
