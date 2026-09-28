class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
       int n2=nums2.size();
       if(n1>n2) {
        return getCommon(nums2,nums1);
       } 
       int i=0;
       int j=0;
       while(i<n1&& j<n2){
        if(nums1[i]==nums2[j]){
            return nums1[i];
        }
        if(nums1[i]>nums2[j]){
            j++;
        }
        else{
            i++;
        }
       }
       return -1;
    }
};