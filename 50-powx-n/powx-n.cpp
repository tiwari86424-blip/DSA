class Solution {
public:
    double Pow(double x,long long  n,double &ans){
       if(n<=0){
       return 1;
       }
       if(n==1){
        return ans;
       }
       
        ans=Pow(x,n/2,ans);
        if(n%2==0){
        return ans*ans;
       }
       return x*ans*ans;
    }
    double myPow(double x, int n) {
        double ans=x;
        long long N=n;
        if(N>=0){
            return Pow(x,N,ans);
               
        }
        else{
            N=-N;
            return 1.0/Pow(x,N,ans);
        }
        
    }
};