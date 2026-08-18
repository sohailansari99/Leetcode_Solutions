class Solution {
public:
    int firstOc(vector<int>& nums , int target){
        int left = 0;
        int right = nums.size() - 1;

        int ans=-1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                ans=mid;
                right = mid-1;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return ans;

    }

    int lastOc(vector<int>&nums, int target){
        int left =0; 
        int right = nums.size()-1;
        int ans=-1;

        while(left <= right){
            int mid = left + (right -left) / 2;

            if(nums[mid]==target){
                ans=mid;
                left = mid +1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOc(nums, target);
        int second = lastOc(nums, target);

        return {first, second};
    }
};