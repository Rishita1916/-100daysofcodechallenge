#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[],int size){

    int res=0;
    for(int i=0;i<size;i++){
        res=res^arr[i];
    }
    return res;

}
int main(){

    int n,ans;
    cin>>n;
    int arr[5]={1,2,2,3,3};
    ans=findUnique(arr,n);
    cout<<ans;
    return 0;
}