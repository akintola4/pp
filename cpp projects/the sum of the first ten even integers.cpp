#include<iostream>
using namespace std;

int main()
{
   int sumeven=0;
   int evennum=2;
for (int c=1;c<=10;c++)
{
    sumeven= sumeven + evennum;
    evennum=evennum +2;
}
  cout<< "the sum of the first ten even integers is="<<sumeven;
}

