class Solution { 
public:
    int minInsertions(string s) {
        int min_open = 0;
        int total_brackets = 0;
        for(int i = 0; i < s.length(); i++){ 
            if(s[i] == '('){   
                min_open++;  
            } else{
                if(i + 1 < s.length() && s[i + 1] == ')'){
                    i++;
                }else{
                    total_brackets++;                    
                }
                if(min_open > 0){
                    min_open--;
                }else{
                    total_brackets++;
                }
            }
        }
        total_brackets += min_open * 2;
        return total_brackets;
    }
};