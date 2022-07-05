#include<iostream>
using namespace std;

int main()
{
    int sum,pay1,pay2;
    cout<<"enter amount for acceptance fee:";
    cin>>pay1;
    cout<<"enter amount for school fees :";
    cin>>pay2;
    // acceptance fee payment
    {
    if (pay1<50000)
        cout<<"acceptance can't be processed : "<<endl;
    else
        cout<<"acceptance can be processed : "<<endl;
    }
    {
    if (pay2<120000)
        cout<<"school fees can't be processed :"<<endl;

    else
        cout <<"school fees can be processed :"<<endl;
}

}