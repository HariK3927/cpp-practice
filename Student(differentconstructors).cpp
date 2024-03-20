/*Create a class 'Student' with three data members which are name, age and address. The constructor of the class assigns default values to name as "unknown", age as '0' and address as "not available". It has two functions with the same name 'setInfo'. First function has two parameters for name and age and assigns the same whereas the second function takes has three parameters which are assigned to name, age and address respectively. Print the name, age and address of 10 students.
Hint - Use array of objects*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Student{
    public:
        string name;
        int age;
        string address;
    Student(){
        name="unknown";
        age=0;
        address="not available";
    }
    void setInfo(string nm,int ag){
        name=nm;
        age=ag;
        
    }
    void setInfo(string nm,int ag,string adr){
        //cin>>nm>>ag;
        name=nm;
        age=ag;
        address=adr;
    }
    void display(){
        cout<<name<<age<<address<<endl;
    }
};
int main(){
    Student a[5];
    int age;
    string name,address;
    for(int i=0;i<5;i++){
        if(i%2==0){
            cin>>age>>name;
            a[i].setInfo(name,age);
            a[i].display();
        }
        else{
            cin>>age>>name>>address;
            a[i].setInfo(name,age,address);
            a[i].display();
        }
        
    }
}
