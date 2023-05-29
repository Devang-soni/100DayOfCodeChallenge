//58. Length of Last Word
//Given a string s consisting of words and spaces, return the length of the last word in the string.

//A word is a maximal substring consisting of non-space characters only.

class Solution {
public:
    
    int lengthOfLastWord(string s) {
    
        int res = 0;
        int n = s.length();
        int i = n - 1;
        
        while(s[i] == ' ') {
            i--;
        }
        
        for( ; i>=0; i--) {
            if(s[i] == ' ')                     
                return res;
            res++;
        }
        
        return res;
    }
    
};
