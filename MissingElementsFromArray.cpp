#include<bits/stdc++.h>
using namespace std; 
//visiting + negative marking method by treating element as its repective index. 
int main(){

    int arr[]={1,3,4,5,3};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);

        if(arr[index-1]>0){
            arr[index-1]*=-1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
    return 0;
}