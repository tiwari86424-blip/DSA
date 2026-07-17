class Solution {
public:
    int Helperfun(const vector<int> & nums,int k){
        if(k<0) return 0;
        int n=nums.size();
        int l=0,r=0;
        int count=0;
        unordered_map<int,int>mp;
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return Helperfun(nums,k)-Helperfun(nums,k-1);
    }
};