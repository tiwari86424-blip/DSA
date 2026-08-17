class Solution {
public:
    
    string addBinary(string a, string b) {
        int n1=a.size();
        int n2=b.size();
        int i=n1-1,j=n2-1;
        int c=0;
        string ans;

        while(i>=0 || j>=0 || c){
            int sum=c;
            if(i>=0){
                sum+=a[i--]-'0';
            }
            if(j>=0){
                sum+=b[j--]-'0';
            }
            ans+=(sum%2)+'0';
            c=sum/2;
        }
            
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};