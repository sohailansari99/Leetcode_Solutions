class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {

        int maxCount=0;
        int rowindex=0;
        for(int i=0; i<mat.size(); i++){
            int cnt=0; 
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j] == 1){
                    cnt++;
                }
            }
            if(cnt > maxCount){
                maxCount=cnt;
                rowindex=i;
            }
        }
        return {rowindex, maxCount};
    }
};