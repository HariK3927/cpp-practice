/*Create a class named 'Shape' with a function to print "This is a shape". Then create two other classes named 'Rectangle' and 'Circle' inheriting the Shape class, both having a function to print "This is rectangular shape" and "This is circular shape" respectively. Create a subclass 'Square' of 'Rectangle' having a function to print "Square is a rectangle". Now call the function of the 'Shape' and the 'Rectangle' class by the object of the 'Square' class.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Shape{
    protected:
        void print(){
            cout<<"This is a shape"<<endl;
        }
};
class Rectangle:protected Shape{
    public:
        void printrect(){
            cout<<"This is rectangle shape"<<endl;
        }
};
class Circle: public Shape{
    public:
        void printcirc(){
            cout<<"this is circle shape"<<endl;
        }
};
class Square:public Rectangle{
    public:
        void printsq(){
            cout<<"square is a rectangle"<<endl;
        }
};
int main(){
    Square A;
    //A.print();
    A.printrect();
    A.printsq();
}

/*observations
public: it means you can access parent class & child class objects also by calling through objects
private :we cannot access even in objects also ,we can access only inside that class
protected:we can access in dervied class objects not in the same class objects*/
