#include<bits/stdc++.h>
using namespace std;
bool checkSorted(vector<int> arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
} 
int main(){

    vector<int> arr{1,2,2,3,4,5};
    vector<int> brr{1,2,2,7,4,5};
    bool ans_arr=checkSorted(arr);
    bool ans_brr=checkSorted(brr);
    cout<<ans_arr;
    return 0;
}