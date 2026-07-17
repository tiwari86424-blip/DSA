class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>hash(3,-1);
        int n=s.size();
        int r=0;
        int count=0;
        while(r<n){
            hash[s[r]-'a']=r;
            count=count+(1+min(hash[0],min(hash[1],hash[2])));
            r++;
        }
        return count;
    }
};