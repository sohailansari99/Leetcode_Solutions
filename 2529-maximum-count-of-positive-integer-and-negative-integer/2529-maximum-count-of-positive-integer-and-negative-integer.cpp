class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pcnt=0;
        int ncnt=0;
        int ans=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                pcnt++;
            }
            if(nums[i] < 0){
                ncnt++;
            }
            ans = max(ans, pcnt);
            ans = max(ans, ncnt);
        }

        return ans;
    }
};