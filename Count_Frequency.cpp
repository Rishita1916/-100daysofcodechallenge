#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{2,1,2,3,1,1,3,6,6,7};

    unordered_map<int,int> mp;

    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }

    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

    // 
    // int n=10;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==true){
    //         continue;
    //     }

    //     int count=1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             arr[j]=true;
    //             count++;
    //         }

    //     }
    //     cout<<arr[i]<<" "<< count<<endl;
    // }

    // vector<int> ans;
    // vector<int> arr{1,2,2,1,3,3,6,5,7,8,8};
    // sort(arr.begin(),arr.end());
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }

    // for(int i=0;i<arr.size();i++){
    //     int count=1;

    // }

    return 0;
}