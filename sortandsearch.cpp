#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class numbers{
    private:
        int arr[7]={4,29,34,16,49,1,20};
    public:
        int* bubblesort(){
            int n =sizeof(arr)/sizeof(arr[0]);
            bool swap=true;
            while (swap){
                swap = false;
                for(int j=0;j<n;j++){
                    if (arr[j]>arr[j+1]){
                        swap = true;
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    
                    }
                }
            }
            return arr;
            
        }
        int* selectionsort(){
            int n = sizeof(arr)/sizeof(arr[0]);
            int temp;
            for (int i=0;i<n;i++){
                for(int j=i;j<n-1;j++){
                      if(arr[i]>arr[j+1]){
                          temp =arr[i];
                          arr[i]=arr[j+1];
                          arr[j+1]=temp;
                      }
                }
            }
            return arr;
        }
        void mergesort(vector<int> &arr,int low,int high){
                if (low>=high) return;
                int mid=(low+high)/2;
                mergesort(arr,low,mid);
                mergesort(arr,mid+1,high);
                merge(arr,low,mid,high);
        }
        void merge(vector<int> &arr,int low,int mid,int high){
                vector<int> temp;
                int left=low;
                int right=mid+1;
                
                while ((left <= mid) && (right <= high) ){
                    if(arr[left] <=arr[right]){
                        temp.push_back(arr[left]);
                        left++;
                        
                    }
                    else{
                        temp.push_back(arr[right]);
                        right++;
                    }
                    
                    
                }
                while(left<=mid){
                    temp.push_back(arr[left]);
                    left++;
                }
                while(right<=high){
                    temp.push_back(arr[right]);
                    right++;
                }
                for(int i=low;i<=high;i++){
                    //cout<<temp[i]<<endl;
                    arr[i]=temp[i-low];
                }
                
                
            }
        int search(vector<int> &arr,int e,int low,int high){
            if (low==high){
                return arr[low]==e;
            }
            int mid = low+high/2;
            if (arr[mid]==e){
                return true;
                
            }
            else if(arr[mid]>e){
                if (low==mid){
                    return false;
                    
                }
                else{
                return search(arr,e,low,mid-1);
                }
                
            }
            else{
                return search(arr,e,mid+1,high);
                
            }
            
        }
    
    
};
int main(){
    numbers A;
    /*int* x=A.bubblesort();
    for(int j=1;j<=7;j++){
        cout<<*(x+j)<<endl;
    }
    int* y=A.selectionsort();
     for(int j=1;j<=7;j++){
        cout<<*(y+j)<<endl;
    }*/
    vector<int> x={3,4,67,45,23,9};
    A.mergesort(x,0,5);
    for(int i=0;i<6;i++){
        cout<<x[i]<<endl;
    }
    cout<<A.search(x,6,0,5);
    
    return 0;
    
    
}
