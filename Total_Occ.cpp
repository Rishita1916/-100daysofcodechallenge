#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int firstOcc(vector<int> arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int lastOcc(vector<int> arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    int count=0;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;

    
            s=mid+1;
            
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){

    vector<int>arr{1,2,3,4,4,4,4,4,6,8,9};
    int target=4;
    int res1=firstOcc(arr,target);
    int res2=lastOcc(arr,target);
    int total_occ= res2- res1 + 1;
    cout<<"total occurance of " <<target <<" is : "<<total_occ<<endl;
    return 0;
}