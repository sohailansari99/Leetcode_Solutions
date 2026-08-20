class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> ans;
        prefix[0]=nums[0];
        ans.push_back(prefix[0]);
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1] + nums[i];
            ans.push_back(prefix[i]);
        }
        return ans;
    }
};