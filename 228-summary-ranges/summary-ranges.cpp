class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
         vector<string>result;
        if(n<=0)  return result;
        int i=0;
        int j=i+1;
        while(i<n && j<n){
          if(nums[j]==nums[j-1]+1){
            j++;
            
          }  
          else{
            string s=to_string(nums[i]);
            if(j!=i+1){
                s=s+"->"+to_string(nums[j-1]);
            }
            result.push_back(s);
            i=j;
            j++;
          }
        }
        if(j>=n){
                string s=to_string(nums[i]);
                if(i!=j-1){
                 s=s+"->"+to_string(nums[j-1]);
                }
                result.push_back(s);
            }
        return result;
        
    }
};