class Solution {
public:
    void CreateParenthesis(int n,int ob,int cb,vector<string>& ans,string&ds){
        if(ob==n && cb==n){
            ans.push_back(ds);
            return;
        }
        if(ob<n){
            ds +='(';
            CreateParenthesis(n,ob+1,cb,ans,ds);
            ds.pop_back();
        }
        if(ob>cb){
            ds +=')';
            CreateParenthesis(n,ob,cb+1,ans,ds);
            ds.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string ds;
        vector<string>ans;
        CreateParenthesis(n,0,0,ans,ds);
        return ans;
    }
};