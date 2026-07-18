class Solution {
public:
int findGCD(vector<int>& nums) {
    int mn = *min_element(nums.begin(), nums.end());
    int mx = *max_element(nums.begin(), nums.end());

    while (mx != 0) {
        int rem = mn % mx;
        mn = mx;
        mx = rem;
    }

    return mn;
}

};