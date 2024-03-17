#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(){
            length=0;
            breadth=0;
        }
        Rectangle(int a,int b){
            length=a;
            breadth=b;
        }
        Rectangle(int a){
            length=a;
            breadth=a;
        }
        void displayarea(){
            cout<<"area is "<<length*breadth<<endl;
        }
};
int main(){
    Rectangle R1(3,4);
    R1.displayarea();
    Rectangle R2(R1);
    R2.displayarea();
    
    
    
}
/* three types of constructors default ,parameter constructor and copy constructor(It creates by using already constructor)*/
