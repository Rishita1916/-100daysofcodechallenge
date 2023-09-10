#include<bits/stdc++.h>
// #include<vector>
using namespace std; 

int main(){

    int count=1;


    vector<int> arr{1,2,3,4,5};
    vector<int> brr{1,2,3};
    vector<int> crr;

    for(int i=0;i<arr.size();i++){
        crr.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++){
        crr.push_back(brr[i]);
    }
    sort(crr.begin(),crr.end());

    // for(int i=0;i<crr.size();i++){
    //     cout<<crr[i]<<" ";

    // }

    for(int i=0;i<crr.size()-1;i++){
        
            if(crr[i]!=crr[i+1]){
                count++;
            }

        
    }

    cout<<count;


    //bruteforce

    // vector<int> ans;
    // // vector<int> ans2;
    // int arr[6]={1,2,3,4,5};
    // int sizea=6;
    // int brr[5]={6,7,4,8,9}; 
    // int sizeb=5;


    // // for(int i=0;i<sizea;i++){
    // //     for(int j=0;j<sizeb;j++){
    // //         if(arr[i]==brr[j]){
    // //             brr[j]=-1; 
    // //             ans1.push_back(arr[i]);
    // //         }
    // //     }
    // // }


    
    // for(int i=0;i<sizea;i++){
    //     ans.push_back(arr[i]);
    // }
    // for(int i=0;i<sizeb;i++){
    //     ans.push_back(brr[i]);
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    
    return 0;
}