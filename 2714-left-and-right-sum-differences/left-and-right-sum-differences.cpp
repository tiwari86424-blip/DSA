class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftsum;
        vector<int>rightsum;
        vector<int>result;
        int n=nums.size();
        leftsum.push_back(0);
        rightsum.push_back(0);
        int lsum=0;
        int rsum=0;
        for(int i=0,j=n-1;i<n-1 && j>0;i++,j--){
            lsum+=nums[i];
            rsum+=nums[j];
            leftsum.push_back(lsum);
            rightsum.push_back(rsum);
        }
      int n1=leftsum.size();
      for(int i=0,j=n-1;i<n && j>=0;i++,j--){
        result.push_back(abs(leftsum[i]-rightsum[j]));
      }
      return result;
        
        
    }
};