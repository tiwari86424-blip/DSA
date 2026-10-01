class Solution {
public:
    bool isValid(string s) {
        vector<char>stack;
        for(auto &it:s){
            if(it=='('||it=='['||it=='{'){
                stack.push_back(it);
            }
            else{
            if(stack.empty()) return false;
            else if((it==')'&&stack.back()=='(') ||(it==']'&&stack.back()=='[')||(it=='}'&&stack.back()=='{')){
                stack.pop_back();
            }
            else return false;
            }
        }
        if(stack.size()==0) return true;
        return false;
    }
};