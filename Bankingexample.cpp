//Banking example
/*
virtual: Used in a base class to declare a function as polymorphic, allowing it to be overridden in derived classes.
override: Used in a derived class to explicitly indicate that a function is overriding a virtual function from a base class. It helps in catching errors during compilation if the function signature does not match the base class function's signature.
*/
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class customer{
    private:
        string name;
        int age;
    public:
    customer(){
        
    }
    customer(string nam,int ag):name(nam),age(ag){
        
    }
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
        
    }
    
    
};
class account{
    private:
        int accno;
        int cifno;
        int ifsc;
    public:
        account(){
            
        }
        account(int acc,int cif,int ifs):accno(acc),cifno(cif),ifsc(ifs){
            
        }
        void getaccno(){
            cout<<accno<<endl;
        }
        void getcifno(){
            cout<<cifno<<endl;
            
        }
        void getifscno(){
            cout<<ifsc<<endl;
            
        }
        
        
};
class RBI{
    private:
        customer c1;
        account a1;
    public:
         RBI():c1("hari",25),a1(1234,5678,90){
             
         }
         void minimuminterest(){
             cout<<4<<"%"<<endl;
         }
         void miimumdeposit(){
             cout<<1000<<endl;
         }
         //virtual void display()
         void display(){
             c1.getname();
             c1.getage();
             a1.getaccno();
             a1.getcifno();
             a1.getifscno();
         }
};
class SBI:public RBI{
    private:
        string branch;
    
    public:
        SBI():RBI(){
            
        }
        void getbranchname(){
            cin>>branch;
        }
        //void display override()
        void display(){
            RBI::display();
            cout<<branch<<endl;
        }
        
    
};
int main(){
    SBI A;
    A.getbranchname();
    A.display();
}
