#include<iostream>
using namespace std;
int main()
{   cout<<"  Liverpool   Vs.   Real Madrid\n";
    int n,b,c;
    b=0;
    c=0;
    //assignment by akintola tope akinfolarin
    //matric 180404059
    //where n stands for the minutes of the match
    //and b stands for the score of Liverpool
    //and c stands for the score of Real Madrid
    for ( n=1; n<=9; n++)
        cout<<n<<".      liv "<<b<<" : "<<c<<" RMD"<<endl;
    for(n>=10; n<=30; n++)
        cout<<n<<".     liv "<<b+1<<" : "<<c<<" RMD"<<endl;
    for(n>=30; n<=50; n++)
        cout<<n<<".     liv "<<b+1<<" : "<<c+1<<" RMD"<<endl;
    for(n>=50; n<=90; n++)
        cout<<n<<".     liv "<<b+2<<" : "<<c+1<<" RMD"<<endl;
    return 0;
}