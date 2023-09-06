#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[]={1,2,3,4,5,6};
    int size;
    cin>>size;
    reverseArray(arr,size);
    printArray(arr,size);
    return 0;
}
