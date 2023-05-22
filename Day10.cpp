//125. Valid Palindrome
//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

//Given a string s, return true if it is a palindrome, or false otherwise.


class Solution {
public:
    bool isPalindrome(string s) {
    
        string res = "";
        
        for(auto &ch : s) {
            if(isalpha(ch) || isdigit(ch)) {
                res += tolower(ch);
            }
        }
        
        string temp = res;
        reverse(res.begin(), res.end());
        return (temp == res);
    }
    
};
