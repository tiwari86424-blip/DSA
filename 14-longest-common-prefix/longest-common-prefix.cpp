class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
       int n=str.size();
            string ans;
            if(n==0) return "";
            sort(str.begin(),str.end());
            int i=0,j=str[0].size();
           int  y=str[n-1].size();
            while(i<j && i<y){
                if(str[0][i]==str[n-1][i]){
                    ans.push_back(str[0][i]);
                    i++;
                }
                else {
                    break;
                }
            }
            return ans;
            
        
        
    }
};