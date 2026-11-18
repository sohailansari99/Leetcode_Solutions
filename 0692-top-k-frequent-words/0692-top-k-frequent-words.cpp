class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        vector<string> ans;
        auto cmp = [](pair<int,string> a, pair<int,string> b){
            if(a.first == b.first){
                return a.second < b.second;
            }
            return a.first > b.first;
        };
        priority_queue<pair<int,string>, vector<pair<int,string>>, decltype(cmp)> pq(cmp);

        for(int i=0; i<words.size(); i++){
            freq[words[i]]++;
        }
        for(auto it : freq){
            string ele = it.first;
            int fre = it.second;

            pq.push({fre, ele});

            if(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};