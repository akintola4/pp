#include <iostream>
using namespace std;
int main()
{
    int x,y,diff;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter y : ";
    cin >> y;
    float average = (x + y ) / 2;
    cout << "Average : " << average << endl;
    diff=x-y; 
    cout<<"the difference between x and y is:"; cout<<diff;
    return 0;
}
