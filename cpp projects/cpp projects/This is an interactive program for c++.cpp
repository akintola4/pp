// This is an interactive program for c++
# include <iostream>
using namespace std;
int main ()
{
    int a,b,c,summ,prod;

    cout << "Input value of A:";
    cin>>a;
    cout << "Input value of B:";
    cin>>b;
    cout << "Input value of C:";
    cin>>c;

//Then we Compute For Sum and product

    summ=a+b+c;

    prod=a*b*c;

// Then we Output Sum and product
    cout<<"the sum of the 3 variables is:"<<summ;
    cout<<"the product of the 3 variables is:"<<prod;
    return 0;
}