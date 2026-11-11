class Solution {
public:
    char findTheDifference(string s, string t) {
        char freq[256] = {0};
        for(int i=0; i<s.length(); i++){
            freq[s[i] - 'a']++;
        }
        for(int i=0; i<t.length(); i++){
            freq[t[i] -'a']--;

            if(freq[t[i] - 'a'] < 0){
                return t[i];
            }
        }
        return ' ';
    }
};