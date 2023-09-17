#include<bits/stdc++.h>
using namespace std;
void leftRorateByD(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
       temp[i]=arr[i];
    }
    
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
     
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int d;
    cin>>d;
    int n=7;
    leftRorateByD(arr,n,d);

    return 0;
}