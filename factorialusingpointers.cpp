//Write a program to find the factorial of a number using pointers.
#include<iostream>
using namespace std;
int factorial(int *x){
    //cout<<*x<<endl;
    if(*x==1){
        return 1;
        //c=c+1;
        //cout<<"step 1"<<endl;
    }
    else{
        *x=*x-1;
        //c=c+1;
        //cout<<"step2"<<endl;
        return (*x+1)*(factorial(x));
        //cout<<"step3";
    }
    
}
int main(){
    int *p,x;
    p=&x;
    cin>>x;
    //int c=0;
    cout<<factorial(p);
    
    
}
