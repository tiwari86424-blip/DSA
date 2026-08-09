class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        for(auto &s1:s){
            ans^=s1;
        }
        for(auto &s2:t){
            ans^=s2;
        }
        return ans;
    }
};