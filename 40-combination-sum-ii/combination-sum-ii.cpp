class Solution {
public:
    void findCombinations(int index,int target,vector<int>&nums,vector<vector<int>>& ans,vector<int> &ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
    
        for(int i=index;i<nums.size();i++){
            
            if(i>index && nums[i]==nums[i-1]) continue;
            if(nums[i]>target) break;
            if(nums[i]<=target){
                ds.push_back(nums[i]);
                findCombinations(i+1,target-nums[i],nums,ans,ds);
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        findCombinations(0,target,candidates,ans,ds);
        return ans;
    }
};