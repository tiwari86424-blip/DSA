class Solution {
public:
bool isPalindrome(string s){
    string temp=s;
    reverse(s.begin(),s.end());
    return temp==s;
}
void Slice_string(string s,int pos,vector<vector<string>>&ans,vector<string>&ds,int n){
    if(pos==n){
      ans.push_back(ds);
      return;
    }
    for(int i=pos;i<n;i++){
        if(isPalindrome(s.substr(pos,i-pos+1))){
            ds.push_back(s.substr(pos,i-pos+1));
            Slice_string(s,i+1,ans,ds,n);
            ds.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        int n=s.size();
        vector<string>ds;
        Slice_string(s,0,ans,ds,n);
        return ans;
    }
};