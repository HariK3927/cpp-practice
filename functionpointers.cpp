#include<iostream>
#include<vector>
using namespace std;
int* add(int *x,int* y){
    //int *p;
    *x=*x+*y;
    return x;
}
int addf(int x,int y){
    //int *p;
    //x=x+y;
    return x+y;
}
int main(){
    int x=6,y=7;
    int *p=add(&x,&y);
    cout<<*p<<endl;
    int (*pt)(int,int);
    pt = addf;
    int c=pt(x,y);
    cout<<c<<endl;
}
