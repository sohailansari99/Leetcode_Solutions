class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi =0;
        int one=0;
        for(int right = 0 ; right < nums.size(); right++){
            if(nums[right]== 1){
                one++;
                maxi = max(maxi, one);
            }
            else{
                one=0;
            }

        }
        return maxi;
    }
};