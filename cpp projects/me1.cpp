#include<iostream>
using namespace std;

int main () 
{
int scoreA, scoreB, scoreC, counter = 10;
string x = "Your CSC 212 grade is: ";
string y = "Your CSC 206 grade is: ";
string z = "Your CSC 210 grade is: ";

cout<<"This is a score-grade calculator for CSC 212, 206,and 210"<<endl;
cout<<"Follow the instructions below to know your grade:  "<<endl;

do //the do statement to allow for 10 students
{
for (int i =1; i<=10; i++)

//the for statement is to count the number of students up to 10
{
cout<<"...................................."<<endl<<endl;
cout<<"Student "<<i<<" result"<<endl;

cout<<"Enter score for CSC 212: ";cin>>scoreA;
cout<<"Enter score for CSC 206: ";cin>>scoreB;
cout<<"Enter score for CSC 210: ";cin>>scoreC;
cout<<endl;

if (scoreA > 69 && scoreA <= 100) cout<<x<<"A"<<endl;
else if (scoreA > 59 && scoreA <= 69) cout<<x<<"B"<<endl;
else if (scoreA > 49 && scoreA <= 59) cout<<x<<"C"<<endl;
else if (scoreA > 44 && scoreA <= 49) cout<<x<<"D"<<endl;
else if (scoreA > 39 && scoreA <= 44) cout<<x<<"E"<<endl;
else cout<<x<<"F"<<endl;

if (scoreB > 69 && scoreB <= 100) cout<<y<<"A"<<endl;
else if (scoreB > 59 && scoreB <= 69) cout<<y<<"B"<<endl;
else if (scoreB > 49 && scoreB <= 59) cout<<y<<"C"<<endl;
else if (scoreB > 44 && scoreB <= 49) cout<<y<<"D"<<endl;
else if (scoreB > 39 && scoreB <= 44) cout<<y<<"E"<<endl;
else cout<<y<<"F"<<endl;

if (scoreC > 69 && scoreC <= 100) cout<<z<<"A"<<endl;
else if (scoreC > 59 && scoreC <= 69) cout<<z<<"B"<<endl;
else if (scoreC > 49 && scoreC <= 59) cout<<z<<"C"<<endl;
else if (scoreC > 44 && scoreC <= 49) cout<<z<<"D"<<endl;
else if (scoreC > 39 && scoreC <= 44) cout<<z<<"E"<<endl;
else cout<<z<<"F"<<endl;
}
return 0;
}
while ( counter = 10);

return 0;
}