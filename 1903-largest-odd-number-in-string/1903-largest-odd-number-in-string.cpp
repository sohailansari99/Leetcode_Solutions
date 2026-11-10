class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int right = n-1;
        while(right >= 0){
            int digit = num[right] - '0';

            if(digit % 2 != 0){
                break;
            }
            right--;
        }
        if(right < 0){
            return "";
        }

        int left = 0;
        while(left<=right && num[left ] == '0'){
            left++;
        }
        return num.substr(left, right-left+1);
    }
};