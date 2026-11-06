class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;  // No matching opening

                char top = st.top();
                if ((ch == ')' && top == '(') || 
                    (ch == '}' && top == '{') || 
                    (ch == ']' && top == '[')) {
                    st.pop();  // Matching pair
                } else {
                    return false;  // Mismatch
                }
            }
        }

        return st.empty();
        
    }
};
