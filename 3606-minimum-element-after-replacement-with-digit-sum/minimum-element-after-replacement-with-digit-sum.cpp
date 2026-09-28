class Solution {
public:
    int findSum(int n){
        int sum=0;
        while(n>0){
            sum=sum+n%10;
            n=n/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int minEle=INT_MAX;
        for(int i=0;i<n;i++){
            int temp=findSum(nums[i]);
            if(minEle>temp){
                minEle=temp;
            }
        }
        return minEle;
    }
};