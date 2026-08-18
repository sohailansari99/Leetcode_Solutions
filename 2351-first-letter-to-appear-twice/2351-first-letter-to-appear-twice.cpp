class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<int> st;
        for(char ch : s){
            if(st.find(ch) != st.end()){
                return ch;
            }
            st.insert(ch);
        }
        return -1;
    }
};