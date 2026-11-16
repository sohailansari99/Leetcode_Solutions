
class Solution {
public:
    long long fun(vector<int>& piles, int n, int h){
        long long h1 = 0;

        for(int i=0; i<n; i++){
            h1 += (piles[i] + (long long)h - 1) / h;
        }

        return h1;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = -1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            long long hk = fun(piles, n, mid);

            if(hk > h){
                low = mid + 1;
            }
            else{
                ans = mid;
                high = mid - 1;
            }
        }

        return ans;
    }
};
