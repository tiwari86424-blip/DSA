class Solution {
public:
    
    string addBinary(string a, string b) {
        int n1=a.size();
        int n2=b.size();
        int i=n1-1,j=n2-1;
        int c=0;
        string ans;

        while(i>=0 && j>=0){
            int sum=((a[i]-'0')+(b[j]-'0'))+c;
            if(sum==0){
                ans+='0';
                c=0;
            }
            else if(sum==1){
                ans+='1';
                c=0;
            }
            else if(sum==2){
                ans+='0';
                c=1;
            }
            else {
                ans+='1';
                c=1;
            }
            i--;
            j--;
        }
        while(i>=0){
            int sum=(a[i]-'0')+c;
            if(sum==0){
               ans+='0';
               c=0;
            }
            else if(sum==1){
                ans+='1';
                c=0;
            }
            else{
                ans+='0';
                c=1;
            }
            i--;
        }

        while(j>=0){
            int sum=(b[j]-'0')+c;
            if(sum==0){
               ans+='0';
               c=0;
            }
            else if(sum==1){
                ans+='1';
                c=0;
            }
            else{
                ans+='0';
                c=1;
            }
            j--;
        }
        if(c==1){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};