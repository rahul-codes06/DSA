class Solution {
public:
    int scoreOfParentheses(string s) {
        int count = 0;
        int open_bracket = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                open_bracket++;
            }else{
                open_bracket--;
                if(s[i-1] == '('){
                    int curr_pow = 1;
                    for(int j = 0; j < open_bracket; j++){
                        curr_pow *= 2;
                    }
                    count += curr_pow;
                }
            }
        }
        return count;
    }
};