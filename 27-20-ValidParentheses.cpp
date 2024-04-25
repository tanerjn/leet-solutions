class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    unordered_map<char, char> matching_brackets = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char bracket : s) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            st.push(bracket);
        } else {
            if (st.empty() || st.top() != matching_brackets[bracket]) {
                return false;
            }
            st.pop();
        }
    }

    return st.empty();
    }
};
