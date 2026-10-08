class Solution {
public:
    string removeOuterParentheses(string s) {
         string temp = "";
        int opened = 0;
        
        for (char c : s) {
            if (c == '(') {
                if (opened > 0) {
                    temp += c;
                }
                opened++;
            } else {
                opened--;
                if (opened > 0) {
                    temp += c;
                }
            }
        }
        return temp;
    }
};