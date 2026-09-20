class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0; i<s.length(); i++){
            int reve = 26 - (s[i] - 'a');
            ans += reve * (i+1);
        }
        return ans;
    }
};