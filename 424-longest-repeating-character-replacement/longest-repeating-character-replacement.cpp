class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int r=0;
        int l=0;
        vector<int>hash(26,0);
        int maxfre=0;
        int maxlen=0;
        while(r<n){
            hash[s[r]-'A']++;
            maxfre=max(maxfre,hash[s[r]-'A']);
            if((r-l+1)-maxfre>k){
              hash[s[l]-'A']--;
              l++;
            }
            if((r-l+1)-maxfre<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++; 

        }
        return maxlen;
        
    }
};