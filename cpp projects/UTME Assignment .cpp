#include<iostream>
using namespace std;

// assignment by akintola tope akinfolarin matrifno: 1080404059

int main()
{
    int utme,postutme,cutoff_mark;
    cout << "Enter your UTME score : ";
    cin>> utme;
    cout << "Ener your POSTUTME score : ";
    cin >> postutme;

    cutoff_mark = (utme/8) + (postutme/2);

    cout << "your cutoff_mark is :";
    cout << cutoff_mark;
    return 0;
}