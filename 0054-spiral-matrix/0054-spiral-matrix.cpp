class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rowbegin = 0;
        int rowend = matrix.size() - 1;

        int colsbegin=0;
        int colsend = matrix[0].size()-1;

        while(rowbegin <= rowend && colsbegin <= colsend ){
            for(int i=colsbegin; i<= colsend; i++){
                ans.push_back(matrix[rowbegin][i]);
            }
            rowbegin++;

            for(int i=rowbegin; i<= rowend; i++){
                ans.push_back(matrix[i][colsend]);
            }
            colsend--;

            if(rowbegin <= rowend){
                for(int i=colsend; i>=colsbegin; i--){
                    ans.push_back(matrix[rowend][i]);
                }
                rowend--;
            }

            if(colsbegin <= colsend){
                for(int i=rowend ; i>=rowbegin; i--){
                    ans.push_back(matrix[i][colsbegin]);
                }
                colsbegin++;
            }
        }
        return ans;
    }
};