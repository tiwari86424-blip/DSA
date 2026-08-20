class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr1;
        vector<int>arr2;
        for(int i=0;i<n;i++){
            if(arr1.empty()|| (!arr2.empty() && arr1.back()>arr2.back())){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        vector<int>result;
        int n1=arr1.size();
        int n2=arr2.size();
        for(int i=0;i<n1;i++){
            result.push_back(arr1[i]);
        }
        for(int i=0;i<n2;i++){
            result.push_back(arr2[i]);
        }
        return result;
    }
};