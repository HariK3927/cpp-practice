//Write a program to find out the greatest and the smallest among three numbers using pointers.
#include<iostream>
using namespace std;
int* greateramong(int *x,int* y,int* z){
    if(*x>*y){
        if(*x>*z){
            return x;
        }
        else{
            return z;
        }
        
    }
    else{
        if(*y>*z){
            return y;
        }
        else{
            return z;
        }
        
    }
    
}
int main(){
    int *x,*y,*z;
    int p,q,r;
    x=&p;
    y=&q;
    z=&r;
    cout<<"enter p,q,r"<<endl;
    cin>>p>>q>>r;
    cout<<"greatest is "<<*(greateramong(x,y,z))<<endl;
}
