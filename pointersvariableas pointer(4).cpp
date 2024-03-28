
//Write a program to print a number which is entered from keyboard using pointer.
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>(p);
    cout<<*(&p)<<endl;
}
