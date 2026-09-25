class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.length();
        unordered_map<char, int> freq;
        for(char c: s){
            freq[c]++;
        }
        int mid =0;
        while(mid < n && freq[s[mid]] >= k){
            mid++;
        }
        if(n==mid) return n;

        int left = longestSubstring(s.substr(0, mid), k);
        int right = longestSubstring(s.substr(mid+1), k);

        return max(left, right);


    }
};