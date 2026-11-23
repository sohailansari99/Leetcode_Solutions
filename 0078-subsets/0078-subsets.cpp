class Solution {
public:
    void fun(vector<int>& nums, int n, int idex,  vector<int>& temp, vector<vector<int>>& ans){
        if(idex == n){
            ans.push_back(temp);
            return;
        }
        fun(nums, n, idex+1, temp, ans);
        temp.push_back(nums[idex]);
        fun(nums, n, idex+1, temp, ans);
        temp.pop_back();
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        fun(nums, n, 0, temp, ans);
        return ans;

    }
};