class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int maxi = INT_MIN;
        int ans = -1;
        for(int i=0; i<n; i++){
            if(arr[i] > maxi){
                maxi = arr[i];
                ans = i;

            }
        }
        return ans;
    }
};