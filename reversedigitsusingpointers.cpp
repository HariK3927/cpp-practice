//Write a program to reverse the digits a number using pointers.
#include<iostream>
#include<string>
using namespace std;

int reversedigits(int *x){
    string s="";
    while(*x!=0){
        s=s+to_string(((*x)%10));
        *x=*x/10;
        
    }
    return stoi(s);
    
}



int main(){
    int x;
    cout<<"enter number"<<endl;
    cin>>x;
    cout<<reversedigits(&x);
}
