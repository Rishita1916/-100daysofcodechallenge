#include<bits/stdc++.h>
// #include<vector>
using namespace std; 
int main(){

    // vector<int>arr{0,2,1,0,2,0,1,2,0};
    // // int n;
    // // cin>>n;
    // vector<int>ans;
    // int zero=0;
    // int one=0;
    // int two=0;

    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==0){
    //         zero++;
    //     }
    //     else if(arr[i]==1){
    //         one++;
    //     }
    //     else{
    //         two++;
    //     }
    // }
    

    // for(int i=0;i<zero;i++){
    //     ans.push_back(0);
        
    // }
    // for(int i=zero;i<zero+one;i++){
    //     ans.push_back(1);
        
    // }
    // for(int i=zero+one;i<ans.size();i++){
    //     ans.push_back(2);
        
    // }

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
        
    // }
    
    vector<int>arr{0,2,1,0,2,0,1,2,0};
    int l=0,m=0,h=arr.size()-1;

    while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}