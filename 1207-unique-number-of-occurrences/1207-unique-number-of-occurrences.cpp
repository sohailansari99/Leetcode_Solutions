class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> st;
        for(int x : arr){
            freq[x]++;
        }
        for(auto c : freq){
            if(st.find(c.second) != st.end()){
                return false;

            }
            st.insert(c.second);
        }
        return true;
    }
};