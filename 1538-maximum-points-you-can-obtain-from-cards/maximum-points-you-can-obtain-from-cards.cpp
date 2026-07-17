class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        int l=k-1;
        int r=n-1;
        for(int i=0;i<=l;i++){
            sum+=cardPoints[i];
        }
        int maxsum=sum;
        int rightsum=0;
        for(int i=l;i>=0;i--){
            sum=sum-cardPoints[i];
            rightsum=rightsum+cardPoints[r--];
            maxsum=max(maxsum,sum+rightsum);
        }
        return maxsum;


        
    }
};