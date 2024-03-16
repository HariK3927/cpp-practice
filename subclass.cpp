/*Create a class with a function that prints "This is parent class" and its subclass with another function that prints "This is child class". Now, create an object for each class and call
1 - function of the parent class by the object of the parent class
2 - function of the child class by the object of the child class
3 - function of the parent class by the object of the child class*/

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class A{
    public:
        void prt(){
            cout<<"adjfl"<<endl;
        }
    
    
};
class B:public A{
    public:
        void crt(){
            cout<<"Hi "<<endl;
        }
}; 
int main(){
    A x;
    x.prt();
    B y;
    y.crt();
    y.prt();
}
