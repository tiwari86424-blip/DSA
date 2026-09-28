class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>frequency(5);//b,a,l,o,n
        int n=text.size();
        for(int i=0;i<n;i++){
            if(text[i]=='b'){
                frequency[0]++;
            }
            else if(text[i]=='a'){
                frequency[1]++;
            }
            else if(text[i]=='l'){
                frequency[2]++;
            }
            else if(text[i]=='o'){
                frequency[3]++;
            }
            else if(text[i]=='n'){
                frequency[4]++;
            }
        }
        return min({frequency[0],frequency[1],frequency[2]/2,frequency[3]/2,frequency[4]});
    }
};