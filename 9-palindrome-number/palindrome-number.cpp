class Solution {
public:
    int reverseNumber(int x){
        long long  res=0;
        while(x>0){
           int digit  =x%10;
           res=res*10+digit;
           x=x/10;
        }
        return (int)res;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
       int y=reverseNumber(x);
       if(x==y) return true;
       return false; 
    }
};