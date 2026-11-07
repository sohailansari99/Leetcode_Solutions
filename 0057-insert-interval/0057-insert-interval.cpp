
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> newArr;
        bool inserted = false;
        for(int i = 0; i < intervals.size(); i++) {
            if(inserted == false && newInterval[0] <= intervals[i][0]) {
                newArr.push_back(newInterval);
                inserted = true;
            }
            newArr.push_back(intervals[i]);
        }
        if(inserted == false) {
            newArr.push_back(newInterval);
        }
        int st1 = newArr[0][0];
        int en1 = newArr[0][1];
        vector<vector<int>> res;
        for(int i = 1; i < newArr.size(); i++) {
            int st2 = newArr[i][0];
            int en2 = newArr[i][1];
            if(en1 >= st2) {
                en1 = max(en1, en2);
            }
            else {
                res.push_back({st1, en1});

                st1 = st2;
                en1 = en2;
            }
        }
        res.push_back({st1, en1});
        return res;
    }
};
