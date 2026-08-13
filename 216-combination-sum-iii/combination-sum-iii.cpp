class Solution {
public:
    void FindCombinations(int index,int k,int n,vector<vector<int>>&ans,vector<int>&ds){
        if(n==0){
            if(ds.size()==k){
            ans.push_back(ds);
            }
            return;
        }
        for(int i=index;i<=9;i++){
            if(i>n) break;
            ds.push_back(i);
            FindCombinations(i+1,k,n-i,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int>ds;
       vector<vector<int>>ans;
       FindCombinations(1,k,n,ans,ds);
       return ans;
       

    }
};