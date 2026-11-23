
class Solution {
public:
    void fun(vector<int>& nums, int n, int idex,vector<int>& temp, vector<vector<int>>& ans) {
        ans.push_back(temp);
        for(int i = idex; i < n; i++) {
            if(i > idex && nums[i] == nums[i-1]) {
                continue;
            }
            temp.push_back(nums[i]);
            fun(nums, n, i+1, temp, ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> temp;
        vector<vector<int>> ans;
        fun(nums, n, 0, temp, ans);
        return ans;
    }
};
