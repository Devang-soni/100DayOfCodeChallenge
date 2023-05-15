
//Given an integer x, return true if x is a palindrome , and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        
        int l=0, r= str.size()-1;
        
        while(1<=r){
            if(str[l++] != str[r--])
                return false;
        }
        return true;
    }
};
