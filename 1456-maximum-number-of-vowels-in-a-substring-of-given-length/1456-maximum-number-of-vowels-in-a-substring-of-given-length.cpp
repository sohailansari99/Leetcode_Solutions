class Solution {
public:
    int maxVowels(string s, int k) {
        int vowelCnt=0;
        int maxVal=0;
        for(int i=0; i<k ;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]== 'i' || s[i]=='o' || s[i]=='u'){
                vowelCnt++;
            }
        }
        maxVal = vowelCnt;

        for(int i=k; i<s.length() ; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowelCnt++;
            }
            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] =='u'){
                vowelCnt--;
            }
            maxVal = max(maxVal, vowelCnt);
        }
        return maxVal;
        
    }
};