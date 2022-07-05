#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int num1, num2, num3;
    int max, min;
    int sum, product;
    int average;
    cout<<"Input three different integers:"<<endl;
    cin>>num1>>num2>>num3;
    sum=num1+num2+num3;
    product=num1*num2*num3;
    average=sum/3.0;
    cout<<"Sum is "<<sum<<endl;
    cout<<"Average is "<<average<<endl;
    cout<<"Product is "<<product<<endl;
    min=num1;
    if(num2<min) min=num2;
    if(num3<min) min=num3;
    cout<<"Smallest is "<<min<<endl;
    max=num1;
    if(num2>max) max=num2;
    if(num3>max) max=num3;
    cout<<"Largest is "<<max<<endl;
    return 0;
}