#include<iostream>
using namespace std;

void findMinAndMax(int arr[],int n){
    int min=arr[0];
    int max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"MINIMUM : "<<min<<endl;
    cout<<"MAXIMUM : "<<max<<endl;
}
int main(){
    int arr[]={2,3,6,7,9,4};
    int size;
    cin>>size;
    findMinAndMax(arr,size);
    return 0;
}