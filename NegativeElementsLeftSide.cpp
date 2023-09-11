#include<bits/stdc++.h>
// #include<vector>
using namespace std; 

int main(){

    vector<int> arr{12,4,6,-9,-8,-3,5};
    int l=0,h=arr.size()-1;
    while(l<=h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}