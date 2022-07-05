#include<iostream>
using namespace std;

int main () 
{
int even = 0, counter = 2;
cout<<"The first ten even integers are:"<<endl;
for (int i = 1; i <= 10; i++)
{
even = even + counter;
cout<<even<<endl;
}
return 0;
}