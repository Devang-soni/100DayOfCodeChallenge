//7. Reverse Integer
//Given a signed 32-bit integer x, return x with its digits reversed.
//If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

class Solution {
public:
    
    int reverse(int x) {
        int rev = 0;
        
        while(x) {
            
            int pop = x % 10;
            x = x / 10;

            if(rev > INT_MAX/10 || (rev == INT_MAX && pop >  7) )        
                return 0;
            if(rev < INT_MIN/10 || (rev == INT_MIN && pop < -8) )        
                return 0;
            
            int temp = rev * 10 + pop;
            rev = temp;
        }     
        return rev;
        
    }
    
};
