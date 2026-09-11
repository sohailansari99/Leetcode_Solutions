class Solution {
public:
    string removeOccurrences(string s, string part) {
        string st;

        for (char c : s) {
            st.push_back(c);

            if (st.size() >= part.size()) {
                if (st.substr(st.size() - part.size()) == part) {
                    st.erase(st.size() - part.size());
                }
            }
        }

        return st;
    }
};