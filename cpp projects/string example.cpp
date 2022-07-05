#include<iostream>
#include <cstring>
using namespace std;

int main()

{
    char key [25]; 
    char buffer[25];
    cout<<"enter a key string"<<endl;
    cin.getline(key,25);
    strcpy(buffer,key);
    cout<<"key ="<<key<<endl;
    cout<<"buffer ="<<buffer<<endl;
}