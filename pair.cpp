#include<bits/stdc++.h>
// #include<vector>
using namespace std; 
int main(){

    vector<int> arr{1,3,4,5,6};
    vector<int>ans;
    int sum;
    cout<<"enter the sum value ypu are searching for the pairs!";
    cin>>sum;

    for(int i=0;i<arr.size();i++){
        
        for(int j=i+1;j<arr.size();j++){
            // cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            if(arr[i]+arr[j]==sum){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                break;


            }
            break;
           
        }
        
    }

     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }








    return 0;
}