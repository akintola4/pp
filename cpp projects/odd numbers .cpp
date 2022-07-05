#include<iostream>
using namespace std;

int main () 
{
int odd = 1, counter = 2;
cout<<"The first ten odd integers are:"<<endl;
for (int i = 1; i <= 10; i++)
{
cout<<odd<<endl;
odd = odd + counter;
}
return 0;
}