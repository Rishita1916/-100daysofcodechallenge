#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

void extremePrint(int arr[],int size){

    int i,j,temp=0;

    for(i=0 ,j=size-1;i<j;i++, j--){

        temp=arr[i];

        arr[i]=arr[j];
        arr[j]=temp;


        

    }

    printArray(arr,size);

}

int main(){

    int arr[10]={1,2,3,4,5,6,7,8};
    int n;
    cin>>n;
    extremePrint(arr,n);
    return 0;
}