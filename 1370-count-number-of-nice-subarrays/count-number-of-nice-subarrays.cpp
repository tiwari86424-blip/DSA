class Solution {
public:
    int BinarySub(const vector<int>&nums,int goal){
        if(goal<0) return 0;
        int n=nums.size();
        int r=0,l=0;
        int count=0,sum=0;
        while(r<n){
            sum+=nums[r]%2;
            while(sum>goal){
                sum=sum-nums[l]%2;
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return BinarySub(nums,k)-BinarySub(nums,k-1);
    }
};