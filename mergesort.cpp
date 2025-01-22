#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int start,int middle,int end){
    int n1=middle-start+1;
    int n2=end-middle;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i=0;i<n1;i++){
        arr1[i]=arr[start+i];
    }
    for(int j=0;j<n2;j++){
        arr2[j]=arr[middle+j+1];
        
    }
    int i=0,j=0,k=start;
    while(i<n1 && j< n2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
        }
        else{
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void mergesort(vector<int> &arr,int start,int end){
    if(start>=end){
        return;
    }
    int middle = (start+end)/2;
    mergesort(arr,start,middle);
    mergesort(arr,middle+1,end);
    merge(arr,start,middle,end);
}
int main(){
    vector<int> arr={1,9,7,6,5,3,4,2,8};
    mergesort(arr,0,8);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
}

