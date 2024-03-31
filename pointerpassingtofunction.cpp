/*Write a function which will take pointer and display the number on screen. Take number from user and print it on screen using that function.
*/

#include<iostream>
using namespace std;
//here int* x  is defined as argument  so we have to pass //address
//even to return pointer means only address we need to return
//int* return data type means p if integer means *p
void print(int* x ){
    cout<<*x<<endl;
}
/*pointer is variable which stores the address of another variable such that by dereferencing it we can access the value*/
int main(){
    //initializing pointer *p and normalnvariable x
    int *p,x;
    //since *p is pointer,x is variable ,we have to assign 
    //address of x to pointer variable p
    p=&x;
    /*we can take value for variable x or *p but not p(since it can store address only) */
    
    cin>>*p;
    //we need pass address so it can be &x or p not *p or x
    //as in the function declares pointer we have to//passaddress only
    print(p);
}
