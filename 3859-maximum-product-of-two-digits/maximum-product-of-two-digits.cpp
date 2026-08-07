class Solution {
public:
    int MaxNumber(int n){
        int first=INT_MIN;
        int second=INT_MIN;
        while(n>0){
            if(n%10>=first){
                second=first;
                first=n%10;
            }
            else if(n%10>second){
                second=n%10;
            }
            n=n/10;
        }
        return first*second;

    }
    int maxProduct(int n) {
        return MaxNumber(n);
    }
};