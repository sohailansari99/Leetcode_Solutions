class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int minFound=0;
        int  jump=0;
        int currend=0;
        for(int i=0; i<n-1 ; i++){
            minFound = max (minFound, i + nums[i]);

            if(i==currend){
                jump++;
                currend = minFound;
            }

        }
        return jump;
    }
};