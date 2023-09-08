#include<iostream>
using namespace std;

void withoutSorting(int arr[],int n){
    int zeros=0,ones=0,twos=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeros++;
        }
        if(arr[i]==1){
            ones++;
        }
        if(arr[i]==2){
            twos++;
        }
    }
    for(int i=0;i<zeros;i++){
        arr[i]=0;
    }
    for(int i=zeros;i<zeros+ones;i++){
        arr[i]=1;
    }
    for(int i=zeros+ones;i<n;i++){
        arr[i]=2;
    }

    // cout<<zeros<<ones<<twos;
    
    
    
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        
}
int main(){
    int arr[50]={1,1,1,0,0,0,0,0,2,2,2,2};
    int n;
    cin>>n;
    withoutSorting(arr,n);
    printArray(arr,n);
    
    return 0;
}