#include<bits/stdc++.h>
using namespace std;

bool find(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int max(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){

    int arr[10]={2,4,5,6,7,9};
    int n,key,res;
    cin>>n;
    // cout<<"enter the key";
    // cin>>key;
    // int ans=find(arr,n,key);
    // cout<<ans;

    res=max(arr,n);
    cout<<res;


    return 0;
}