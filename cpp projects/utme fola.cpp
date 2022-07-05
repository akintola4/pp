#include<iostream>
using namespace std;

int main()
{
int utme,post_utme,cut_off;
    cout << "Enter Utme score :";
    cin>>utme;
    cout<<"enter post_utme score :";
    cin>>post_utme;
    
    cut_off= (utme/8) + (post_utme/2);
    
    cout<<"Your cutt off mark is :"<<cut_off<<endl;
    
}