class Solution {
public:
    int minAddToMakeValid(string s) {
        int open_min = 0;
        int close_min = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                open_min++;
            } else{
                if(open_min > 0){
                    open_min--;
                }else{
                    close_min++;
                }
            }
        }
        return open_min + close_min;
    }
};