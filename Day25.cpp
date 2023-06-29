//1015. Smallest Integer Divisible by K

class Solution {
public:
    int smallestRepunitDivByK(int K) {
        // if either k is even(divisible by 2) or divisible by 5 
        if(!(K&1) || !(K%5)) return -1;
        
        int rem = 0;
        for(int i=1; i<=K; i++) {
            rem = (rem * 10 + 1) % K;
            
            if(rem == 0) return i;
        }
        
        return -1;
    }
};
