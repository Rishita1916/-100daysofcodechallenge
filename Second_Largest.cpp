#include<bits/stdc++.h>
using namespace std; 
int secondLargest(vector<int> arr){
    int largest=arr[0];
    int slargest=INT_MIN;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;

}
int secondSmallest(vector<int> arr){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<arr.size();i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;

}
int main(){
    vector<int> arr{4,2,7,3,1};
    int slargest=secondLargest(arr);
    int ssmallest=secondSmallest(arr);
    cout<<slargest<<" "<<ssmallest;
    
    
    

    

    // vector<int> arr{4,2,7,3,1};
    // vector<int> store_index;
    // int index;
    // int l=INT_MIN;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]>l){
    //         l=arr[i];
    //         store_index.push_back(i);
    //     }
    // }
    // index=store_index[store_index.size()-2];
    // int res=arr[index];
    // cout<<res;
    return 0;
}