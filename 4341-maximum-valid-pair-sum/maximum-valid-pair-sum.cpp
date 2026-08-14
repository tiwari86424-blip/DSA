class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>sol(n-k);
        int right=INT_MIN;
        int ans=INT_MIN;
        for(int i=n-k-1;i>=0;i--){
            right=max(right,nums[i+k]);
            ans=max(right+nums[i],ans);
        }
        return ans;
    }
};