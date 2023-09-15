#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int n, int t){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        int element=arr[mid];
        if(element==t){
            return mid;
        }
        if(t < arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;


}
int main(){

    int arr[]={1,3,7,9,11,13,15,19};
    int size=8;
    // cin>>size;
    int target=13;
    // cin>>target;
    int index =binarySearch(arr,size,target);
    if(index == -1){
        cout<<"target not found !"<<endl;
    }
    else{
        cout<<"target found at : "<<index<<endl;
    }

    // // vector<int> arr{3,6,8,10,22,37,49,50};
    // int arr[]={1,2,3,4,5,6,7};
    // int size=7;
    // // if(binary_search(arr.begin(),arr.end(),150)){
    // //     cout<<"found"<<endl;
    // // }
    // // else{
    // //     cout<<"not found"<<endl;
    // // }
    // if(binary_search(arr, arr+size ,150)){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }
   


    return 0;
}