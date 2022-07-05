#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"incdicate by inputtingthe no of element for your array :"; 
        cin>>n;
    int myscores[4];
    for(int i=0; i<4; i++)
    {   cout<<"Enter Score "<<i+1<<":";
        cin>>myscores[i];
    }
    return 0;
}