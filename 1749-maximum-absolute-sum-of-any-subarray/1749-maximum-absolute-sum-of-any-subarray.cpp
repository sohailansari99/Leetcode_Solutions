class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxend = 0;
        int minend = 0;

        int maxsum = 0;
        int minsum = 0;

        for(int num : nums){
            maxend =  max(num, maxend + num);
            maxsum = max(maxsum, maxend);

            minend = min(num, minend+num);
            minsum = min(minsum, minend);


        }
        return max(maxsum, abs(minsum));
    }
};