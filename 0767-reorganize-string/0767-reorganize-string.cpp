class Solution {
public:
    string reorganizeString(string s) {
        int n = s.length();

        vector<int> freq(26, 0);

        for(int i=0; i<n; i++){
            freq[s[i] - 'a']++;
        }

        string ans = "";

        for(int i=0; i<n; i++){

            int maxi = 0;
            int index = -1;

            for(int j=0; j<26; j++){

                if(freq[j] > maxi && 
                   (ans.empty() || ans.back() != j + 'a')){

                    maxi = freq[j];
                    index = j;
                }
            }

            if(index == -1){
                return "";
            }

            ans.push_back(index + 'a');
            freq[index]--;
        }

        return ans;
    }
};