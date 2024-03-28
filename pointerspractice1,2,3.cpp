#include<iostream>
using namespace std;
int main(){
    int x;
    int *p=&x;
    cin>>x;
    cout<<"x :"<<x<<endl;
    cout<<"&x :"<<(&x)<<endl;
    cout<<"p :"<<p<<endl;
    cout<<"&p :"<<&p<<endl;
    cout<<"*p :"<<*p<<endl;
}
