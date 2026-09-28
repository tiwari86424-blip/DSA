class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int> SymbolValue;
       SymbolValue['I']=1;
       SymbolValue['V']=5;
       SymbolValue['X']=10;
       SymbolValue['L']=50;
       SymbolValue['C']=100;
       SymbolValue['D']=500;
       SymbolValue['M']=1000;
       int n=s.size();
       int sum=0;
       if(n==1) return SymbolValue[s[0]];
       for(int i=0;i<n-1;i++){
        if(SymbolValue[s[i]]<SymbolValue[s[i+1]]){
            sum+=SymbolValue[s[i+1]]-SymbolValue[s[i]];
            i++;
        }
        else{
            sum+=SymbolValue[s[i]];
        }
       }
       if(SymbolValue[s[n-2]]>=SymbolValue[s[n-1]]){
            sum+=SymbolValue[s[n-1]];
        }
       return sum;

    }
};