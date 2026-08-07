class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=nums[0];
        int high=nums[n-1];
        vector<int>ans;
        int low1=0;
        while(low1<nums.size()){
            if(low!=nums[low1]){
                ans.push_back(low);
                low++;
            }
            else{
                low++;
                low1++;
            }
        }

        return ans;
    }
};