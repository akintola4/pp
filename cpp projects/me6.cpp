#include<iostream>
using namespace std;

int main () 
{
int score;
string x = "Your grade is: ";
cout<<"This is a score-grade calculator for CSC 212"<<endl;
cout<<"Please, enter your score to know your grade:  ";
cin>>score;
cout<<endl;

if (score > 69 && score <= 100) cout<<x<<"A";
else if (score > 59 && score <= 69) cout<<x<<"B";
else if (score > 49 && score <= 59) cout<<x<<"C";
else if (score > 44 && score <= 49) cout<<x<<"D";
else if (score > 39 && score <= 44) cout<<x<<"E";
else if (score < 40) cout<<x<<"F";
else if (score > 100)
cout<<"Invaid input! Check your score and try again";
return 0;
}