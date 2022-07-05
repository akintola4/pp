#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n/n == 0)
    cout<< n <<"is prime.";
    else cout <<"Not a prime.";
    
    if ( n % 2 == 0)
        cout << n << " is even.";
    else cout << n << " is odd.";
    
    return 0;
}