#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[],int n){

    int temp;
    
    for(int i=0;i<n;i+=2){
        if(i<n){
            // swap(arr[i],arr[i+1]);
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;



        }
    }

}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}
int main(){
    int arr[4];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,size);
    printArray(arr,size);

    return 0;
}