class Solution {
public:
    int numberOfSpecialChars(string word) {
       vector<int>Upper(26);
       vector<int>Lower(26);
       int n=word.size();
       for(int i=0;i<n;i++){
          if(isupper(word[i])){
            Upper[word[i]-'A']++;
          }
          else{
            Lower[word[i]-'a']++;
          }
       } 
       int sum=0;
       for(int i=0;i<26;i++){
        if(Upper[i]>0 && Lower[i]>0){
            sum++;
        }
       }
       return sum;
    }
};