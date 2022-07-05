#include<iostream>

using namespace std;

int main()
{
    int a;
    cout <<"Enter your score for csc 212\n" ;
    cin >> a;
    if( a<=100 && a >= 70) 
        cout <<"you score A in csc 212\n";
    else if(a <=69 && a >= 60) 
        cout <<"you score B in csc 212\n";
    else if(a<=59 && a >= 50) 
        cout <<"you score C in csc 212\n";
    else if(a<=49 && a >= 45) 
        cout <<"you score D in csc 212\n";
    else if ( a<=44 && a >= 40) 
        cout <<"you score E in csc 212\n";
    else if ( a<=39 && a >= 0) 
        cout <<"you score F in csc 212\n";
    else 
        cout <<"Invalid score\n" ;
   
    return 0;
}

