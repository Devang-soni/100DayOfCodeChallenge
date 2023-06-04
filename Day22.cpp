//50.Pow(x,n)
//Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
class Solution {
public:
    
    double myPow(double x, int n) {
    
        if(n == 0)                          
            return 1;
        
        if(n < 0) {
            return 1/x * myPow(1/x, -(n + 1));
        }
        
        if(n % 2 == 0)                      
            return myPow(x * x, n / 2);
        else                                
            return x * myPow(x * x, n / 2);
    }
    
};
