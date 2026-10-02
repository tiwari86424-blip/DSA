class Solution {
public:
    bool canJump(vector<int>& nums) {
        int MinIndex=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
          if(i>MinIndex){
            return false;
          }
          MinIndex=max(MinIndex,i+nums[i]);
        }
        return true;
    }
};