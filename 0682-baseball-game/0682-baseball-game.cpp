class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;

        for(int i=0; i<operations.size(); i++){
            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+"){
                st.push(stoi(operations[i]));
            }
            else{
                if(operations[i] == "C"){
                    st.pop();
                }
                else if(operations[i] == "D"){
                    st.push(2 * st.top());
                }
                else if(operations[i] == "+"){
                    int first = st.top();
                    st.pop();

                    int second = st.top();
                    st.pop();

                    st.push(second);
                    st.push(first);
                    st.push(first + second);
                }
            }
        }

        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};