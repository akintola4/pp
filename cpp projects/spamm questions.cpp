#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum,product,average,min,max;

    cout<<"enter your value for a:";
    cin>>a;
    cout<<"enter your value for b:";
    cin>>b;
    cout<<"enter your value for c:";
    cin>>c;

    sum=a+b+c;
    cout<<"the sum of the numbers is :" <<sum<<endl;
    product =a*b*c;
    cout<<"the product of the numbers is :" <<product<<endl;

    average=sum/3.0;
    cout<<"the average of the numbers is :"<<average<<endl;

    min=a;
    if (b<min) min=b;
    if (c<min) min=c;
    cout<<"the smallest number is :"<<min<<endl;

    max=a;
    if (b>max) max=b;
    if (c>max) max=c;
    cout<<"the largest number is :"<<max<<endl;

}