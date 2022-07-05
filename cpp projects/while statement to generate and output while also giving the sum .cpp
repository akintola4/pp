#include<iostream>
using namespace std;
main()
{
    int n=0, sum=0;
    while(n <= 9)
    {
    n=n+1;
        cout <<n<<"\t"<<endl;
        sum = sum+n;
        }
        cout<<"the sum of the first ten intergers"
        <<sum;
}