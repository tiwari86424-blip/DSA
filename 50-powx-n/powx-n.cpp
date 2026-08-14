class Solution {
public:
    double Pow(double x,long long  n){
       if(n<=0){
       return 1;
       }
       if(n==1){
        return x;
       }
       
        double half=Pow(x,n/2);
        if(n%2==0){
        return half*half;
       }
       return x*half*half;
    }
    double myPow(double x, int n) {
        long long N=n;
        if(N>=0){
            return Pow(x,N);
               
        }
        else{
            N=-N;
            return 1.0/Pow(x,N);
        }
        
    }
};