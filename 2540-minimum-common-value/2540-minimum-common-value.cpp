class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int minval = INT_MAX;
        unordered_set<int> st;
        int ans = INT_MAX;
        for(int x : nums1){
            st.insert(x);
        }
        for(int x : nums2){
            if(st.count(x)){
                ans = min(ans, x);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};