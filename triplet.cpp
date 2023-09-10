#include<bits/stdc++.h>
#include<vector>
using namespace std; 
int main(){


    vector<int>arr{30,20,10,40,50};
    sort(arr.begin(),arr.end());
    int sum;
    cin>>sum;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=i+2;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }

            }

        }
    }








    return 0;
}