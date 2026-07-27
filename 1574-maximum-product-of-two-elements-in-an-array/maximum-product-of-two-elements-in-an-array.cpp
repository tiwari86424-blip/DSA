class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int highest =INT_MIN;
        int secondhighest=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(highest<=nums[i]){
                secondhighest=highest;
                highest=nums[i];
            }
            else if(secondhighest<nums[i]){
                secondhighest=nums[i];
            }
        }
        return (highest-1)*(secondhighest-1);
    }
};