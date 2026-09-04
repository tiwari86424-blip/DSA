class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<=0) return -1;
       int max_ele=nums[0]; 
       int i=0;
       int j=i;
       while(j<n){
        int min_ele=INT_MAX;
        max_ele=max(max_ele,nums[i]);
        for(int v=j;v<n;v++){
          if(min_ele>nums[v]){
            min_ele=nums[v];
          }
        }
        if(max_ele-min_ele<=k){
            return i;
        }
        i++;
        j++;


       }
       return -1;
       
    }
};