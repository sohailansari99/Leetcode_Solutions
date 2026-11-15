class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
         int mod = 1e9 + 7;
        long long cnt = 0;
        long sum = 0;
        int even =1;
        int odd = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            if(sum % 2 != 0){
                cnt = (cnt + even) % mod;
                odd++;
            }
            else{
                cnt = (cnt + odd) % mod;
                even++;
            }
        }
        return cnt;
    }
};