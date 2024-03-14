#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class dis{
    public:
      int feet;
      int inches;
};
class AddDistance{
    public:
        dis a1;
        dis a2;
    dis add(dis a1,dis a2){
        dis a3;
        a3.feet=a1.feet+a2.feet;
        a3.inches=a1.inches+a2.inches;
        if (a3.inches>12){
            a3.feet=a3.feet+(a3.inches/12);
            a3.inches=a3.inches%12;
        }
        return a3;
    }
    
};
int main(){
    dis hari;
    hari.feet=3;
    hari.inches=5;
    dis vamsi;
    vamsi.feet=5;
    vamsi.inches=10;
    AddDistance aa;
    dis final =aa.add(hari,vamsi);
    cout<<"feet"<<final.feet<<endl;
    cout<<"inches"<<final.inches<<endl;
}
