#include<bits/stdc++.h>
using namespace std; 
//returns the index of first repeated element in the array. 
int findFirstRepeating(int arr[],int n){
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]>1){
            return i+1; //i+1 because array follows 1 indexing format.
        }
    }
    return -1;

}
int main(){

    int arr[]={1,5,3,5,3,4,6,7};
    int n;
    cin>>n;
    int res=findFirstRepeating(arr,n);
    cout<<res;
    return 0;
}