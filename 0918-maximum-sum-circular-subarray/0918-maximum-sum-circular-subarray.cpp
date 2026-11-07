class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = INT_MIN;
        int minSum = INT_MAX;
        int maxEnd = 0;
        int minEnd = 0;
        int sum =0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            int v1 = maxEnd + nums[i];
            int v2 = nums[i];

            int v3 = minEnd + nums[i];
            int v4 = nums[i];

            maxEnd = max(v1,v2);
            minEnd = min(v3,v4);

            maxSum = max(maxSum, maxEnd);
            minSum = min(minSum, minEnd);
        }
        if(maxSum < 0){
            return maxSum;
        }
        return max(maxSum, sum - minSum);
    }
};