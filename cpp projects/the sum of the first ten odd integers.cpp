#include<iostream>
using namespace std;

int main()
{
   int sumodd=0;
   int oddnum=1;
for (int r=1;r<=10;r++)
{
    sumodd= sumodd + oddnum;
    oddnum=oddnum +2;
}
  cout<< "the sum of the first ten odd integers is="<<sumodd;
}

