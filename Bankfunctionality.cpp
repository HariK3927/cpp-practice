/*All the banks operating in India are controlled by RBI. RBI has set a well defined guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all banks must follow. For example, suppose RBI has set minimum interest rate applicable to a saving bank account to be 4% annually; however, banks are free to use 4% interest rate or to set any rates above it.

Write a program to implement bank functionality in the above scenario. Note: Create few classes namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc). Assume and implement required member variables and functions in each class.
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
        customer(string nam,int ag){
            name=nam;
            age=ag;
            
        }
        void getname(){
            cout<<name<<endl;
        }
        void getage(){
            cout<<age<<endl;
        }
    
};
class Account{
    private:
        int accno;
        int cifno;
        int ifsccode;
    public:
        Account(){
            
        }
        Account(int x,int y,int z){
            accno=x;
            cifno=y;
            ifsccode=z;
            
        }
        void getaccno(){
            cout<<accno<<endl;
        }
        void getcifno(){
            cout<<cifno<<endl;
            
        }
        void getifsccode(){
            cout<<ifsccode<<endl;
        }
    
};
class RBI{
    customer A;
    Account ax;
    public:
        RBI():A("hari",23),ax(12345,456789,21280){
            
        }
        void getinterestrate(){
            cout<<"interest rate"<<4<<"%"<<endl;
            
        }
        void getwithdrawlimit(){
            cout<<"limit"<<40000<<endl;
        }
        void displaydetails(){
            A.getname();
            A.getage();
            ax.getaccno();
            ax.getcifno();
            ax.getifsccode();
            
        }
    
};
int main(){
    RBI a;
    a.displaydetails();
    
    
}
