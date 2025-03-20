// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
template<typename T1,typename T2>
class hashmap{
    T1 key;
    T2 valuev;
    public:
     void insert(int x){
         int count =0;
         for(int i=0;i<key.size();i++){
             if(key[i]==x){
                 valuev[i]++;
                 count++;
                 break;
             }
         }
         if(count==0){
             key.push_back(x);
             valuev.push_back(1);
         }
     }
     void values(){
         cout<<"[";
         for(int i=0;i<valuev.size();i++){
             cout<<valuev[i]<<endl;
         }
         cout<<"]"<<endl;
     }
     void keys(){
         cout<<"[";
         for(int i=0;i<key.size();i++){
             cout<<key[i]<<endl;
         }
         cout<<"]"<<endl;
     }
     void display(){
         cout<<"{";
         
         for(int j=0;j<valuev.size();j++){
             cout<<"''"<<key[j]<<":"<<valuev[j]<<",";
             
         }
         cout<<"}";
     }
        
};
int main() {
    // Write C++ code here
    hashmap<vector<int>,vector<int>> hmap1;
    vector<int> arr={5,6,3,4,5,6,8,3};
    for(int i=0;i<arr.size();i++){
        hmap1.insert(arr[i]);
    }
    hmap1.display();
    

    return 0;
}
