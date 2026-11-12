class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mini = INT_MAX;
        int n = blocks.size();
        for(int i=0; i<=n-k; i++){
            int cnt  = 0;
            for(int j = i; j<i+k; j++){
                if(blocks[j] == 'W'){
                    cnt++;

                }
            }
            mini = min(mini, cnt);
        }
        return mini;
    }
};