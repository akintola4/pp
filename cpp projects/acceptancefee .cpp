#include<iostream>
using namespace std;

int main()
{
    int sum,a,b;
    cout<<"enter value for a :";
    cin>>a;
    cout<<"enter value for b :";
    cin>>b;
    
    sum=a+b;
    
    if (sum<50)
    cout<<"acceptance can't be processed : "<<endl;
    else 
    cout<<"acceptance can be processed : "<<endl;
}