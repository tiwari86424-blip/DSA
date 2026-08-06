class Solution {
public:
    int Productofdigits(int n){
        int ans=1;
        while(n>0){
            ans*=n%10;
            n=n/10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
       while(true){
         int ans=Productofdigits(n);
       if(ans%t==0) return n;
       n++;
       }
        
    }
};