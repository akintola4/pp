#include<iostream>
using namespace std;

int main()
{
int sum,a,b,prod,diff,aver,opcode;

    cout << "enter value for a :";
    cin>>a;
    cout << "enter value for b :";
    cin>>b;
    
    cout<<"indicate 1 for sum"<<case1;
     cout<<"2 for product"<<case2;
     cout<<"3 for Difference"<<case3;
     cout<<"4 for average"<<case4;
    switch (opcode){
   
    case 1 : sum=a+b;
    cout<<"the sum of the two numbers is :"<<sum<<endl;
    break;
    
    //we use break to stop the loop 
    
    case 2: prod=a*b;
    cout<<"the product of the two numbers is :"<<prod<<endl;
    break;  
    case 3: diff= a-b;
    cout<<"the difference between the two numbers is :"<<diff<<endl;
    break;
    case 4: aver=(a+b)/2;
    cout<<"the average is :"<<aver<<endl;
    break;
    }
}