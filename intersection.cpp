#include<bits/stdc++.h>
// #include<vector>
using namespace std; 
int main(){

    vector<int> ans;
    int arr[10]={1,2,3,4,5,5,6,7};
    int sizea=8;
    int brr[10]={5,5,6,7};
    int sizeb=4;
    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(arr[i]==brr[j]){
                brr[j]=-1; 
                ans.push_back(arr[i]);
            }
        }
    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i];
    // }

    for(auto value:ans){
        cout<<value<<" ";
    }








    return 0;
}