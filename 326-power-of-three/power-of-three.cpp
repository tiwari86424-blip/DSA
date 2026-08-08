class Solution {
public:
    int power(int mid,int n){
        long long  ans=1;
        for(int i=0;i<mid;i++){
            ans*=3;
            if(ans>n) return 2;
        }
        if(ans==n) return 1;
        else return 0;

    }
    bool isPowerOfThree(int n) {
        long long low=0;
        long long high=n;
        while(low<=high){
            long long mid=low+(high-low)/2;
           int ans=power(mid,n);
            if(ans==1) return true;
            if(ans==2){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;



    }
};