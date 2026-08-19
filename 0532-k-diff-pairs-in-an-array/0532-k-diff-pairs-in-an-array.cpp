class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_set<int> st;
        unordered_set<int> pairs;

        for(int num : nums){
            if(st.count(num - k)){
                pairs.insert(num - k);
            }
            if(st.count(num + k)){
                pairs.insert(num);
            }
            st.insert(num);
        }
        return pairs.size();
    }
};