class Solution {
   public:

    bool isMatchingPair(char open, char close) {
        return (open == '(' && close == ')') || (open == '{' && close == '}') ||
               (open == '[' && close == ']');
    }
    
    bool isValid(string& s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }

            else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (st.empty()) {
                    return false;
                }

                char popped = st.top();
                st.pop();
                if (!isMatchingPair(popped, s[i])) {
                    return false;
                }
            }
        }

        bool result = st.empty();
        return result;
    }
};
