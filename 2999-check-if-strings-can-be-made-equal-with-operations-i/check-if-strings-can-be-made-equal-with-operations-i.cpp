class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        unordered_map<char,int> m1even;
        unordered_map<char,int> m2even;
        unordered_map<char,int> m2odd;
        unordered_map<char,int> m1odd;
         
        if(n1!=n2) return false;
        for(int i=0;i<n1;i++){
            if(i%2==0){
                 m1even[s1[i]]++;
                 m2even[s2[i]]++;
            }
            else{
                m1odd[s1[i]]++;
                m2odd[s2[i]]++;
            }
        }
        if(m1even==m2even && m1odd==m2odd){
             return true;
        }
        return false;
    }
};