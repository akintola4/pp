#include<iostream>
using namespace std;

void fill(char c, int row, int col) {
    for(int a=0; a<row; a++) {
        for(int b=0; b<col; b++) {
            if(b%20==1 || b%20==2 ||
                    b-a==1 || b-a==2 ||
                    (a%7==6 || a%7==0) && a%20!=0) {
                cout << c;
            }
            else cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    // draw Naira
    fill('0', 21, 24);
}