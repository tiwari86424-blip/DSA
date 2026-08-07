class Solution {
public:
    void Helper(int index,vector<int>& nums,vector<vector<int>>& ans,vector<int>ds,int target){

        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(target<0 || index==nums.size()){
            return;
        }
        
        if(nums[index]<=target){
            ds.push_back(nums[index]);
            Helper(index,nums,ans,ds,target-nums[index]);
            ds.pop_back();
        }
        Helper(index+1,nums,ans,ds,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        Helper(0,candidates,ans,ds,target);
        return ans;
    }
};