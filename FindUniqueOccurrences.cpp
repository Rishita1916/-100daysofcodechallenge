//leetcode solution to FindUniqueOccurrences 1207 problem 

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        vector<int> ans;
        int size=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        while(i<size){
            int count=1;
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                else{
                    break;
                }
                
            }
            ans.push_back(count);
            i+=count;
        }
        int num=ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<num-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
            
        }
        return true;

           
    }   
};
