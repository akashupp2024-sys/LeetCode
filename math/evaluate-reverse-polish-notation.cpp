class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int> st;

        for (string &t : tokens) {

            // If operator
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if (t == "+") st.push(a + b);
                else if (t == "-") st.push(a - b);
                else if (t == "*") st.push(a * b);
                else {
                    // truncation toward zero
                    st.push(a / b);
                }
            }
            // If number
            else {
                st.push(stoi(t));
            }
        }

        return st.top();
    }
};