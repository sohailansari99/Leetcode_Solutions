class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string tar = "balloon";
        unordered_map<char, int> freq;
        for(char ch: text){
            freq[ch]++;
        }
        int mini = INT_MAX;
        unordered_map<char, int> need;
        for(char ch : tar){
            need[ch]++;
        }
        for(auto it : need){
            int cnt = freq[it.first] / it.second;
            mini = min(mini, cnt);
        }
        return mini;
    }
};