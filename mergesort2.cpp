// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void merge(int* arr,int start,int middle,int end){
    int n1=middle-start+1;
    int n2=end-middle;
    //vector<int> arr1(n1);
    //vector<int> arr2(n2);
    //int arr1[n1];
    //int arr2[n2];
    //int* arr1= new int[n1];
    int *arr2=new int[n2];
    int *arr1=(int *)malloc(n1*sizeof(int));
    
    for(int i=0;i<n1;i++){
        arr1[i]=arr[start+i];
    }
    for(int j=0;j<n2;j++){
        arr2[j]=arr[middle+j+1];
    }
    int i=0,j=0,k=start;
    while(i<n1 && j<n2){
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
    //delete[] arr1;
    free(arr1);
    delete[] arr2;
}
void mergesort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int middle=(start+end)/2;
    mergesort(arr,start,middle);
    mergesort(arr,middle+1,end);
    merge(arr,start,middle,end);
}
int main() {
    // Write C++ code here
    int arr[]={1,9,8,2,7,3,6,4,5};
    mergesort(arr,0,8);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
