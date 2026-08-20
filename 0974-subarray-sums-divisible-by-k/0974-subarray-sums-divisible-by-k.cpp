class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum=0;
        int cnt=0;

        for(int num : nums){
            sum += num;

            int rem = sum % k;

            if(rem < 0){
                rem += k;
            }

            if(mp.find(rem)  != mp.end()){
                cnt += mp[rem];
            }
            mp[rem]++;
        }
        return cnt;
    }
};