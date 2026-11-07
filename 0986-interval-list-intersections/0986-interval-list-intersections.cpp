class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int n = firstList.size();
        int m = secondList.size();
        int i=0,j=0;

        while(i<n && j<m){
            int st1 = firstList[i][0];
            int en1 = firstList[i][1];

            int st2 = secondList[j][0];
            int en2 = secondList[j][1];

            if(st1 < st2){
                if(en1 >= st2){
                    int s = max(st1,st2);
                    int e = min(en1,en2);

                    res.push_back({s,e});
                }
            }
            else{
                if(en2 >= st1){
                    int s = max(st1, st2);
                    int e = min(en1, en2);
                    res.push_back({s,e});
                }
            }
            if(en1 <= en2){
                i++;
            }
            else{
                j++;
            }


        }
        return res;
    }
};