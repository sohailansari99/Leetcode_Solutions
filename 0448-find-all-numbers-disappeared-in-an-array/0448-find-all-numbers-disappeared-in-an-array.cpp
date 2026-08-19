class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> found(1+n, false);
        vector<int> ans;

        for(int num : nums){
            found[num] = true;
        }

        for(int i=1; i<=n; i++){
            if(found[i] == false){
                ans.push_back(i);
            }
        }
        return ans;


    }
};