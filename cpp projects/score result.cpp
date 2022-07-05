#include<iostream>
using namespace std;
main()
{
int score;
    cout<<"Enter your score:";
    cin>>score;
    if (score >69 && score<100)
    cout<< "A";
    else if (score>59 && score<70)
    cout<< "B";
    else if (score>49 && score<60)
    cout << "C";
    else if (score>44 && score<50)
    cout << "D";
    else if (score>39 && score<45)
    cout <<"E";
    else cout<<"F";
}