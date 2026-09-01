class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for(int num : nums){
            freq[num]++;
        }
        for(int x : nums){
            if(freq[x] == 1){
                return x;
            }
        }
        return -1;
    }

};