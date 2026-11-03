class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        sort(nums.begin(), nums.end());
        int v1 = nums[n-1] * nums[n-2] * nums[n-3];
        int v2 = nums[0] * nums[1] * nums[n-1];

        maxi = max(v1,v2);
        return maxi;

    }

};