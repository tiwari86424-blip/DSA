class Solution {
public:
    void Separate(int n,vector<int>&ans){
        vector<int>temp;
           while(n>0){
            temp.push_back(n%10);
            n=n/10;
           }
           int s=temp.size();
           for(int i=s-1;i>=0;i--){
            ans.push_back(temp[i]);
           }
           temp.clear();
      
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
        Separate(nums[i],ans);
        }
        return ans;

    }
};