#include<iostream>
using namespace std;

int main()
{
    int sumeven=0;
    int even=2;
    for(int i=1; i<=7; i++)
    {
        sumeven=sumeven+even;
        even=even+2;
    }


    cout << "the sum of the firstfive even integers is :"
    <<sumeven;
}