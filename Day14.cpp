//413. Arithmetic Slices
//An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.

//For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.
//Given an integer array nums, return the number of arithmetic subarrays of nums.

//A subarray is a contiguous subsequence of the array.


class Solution {
public:
    
    int numberOfArithmeticSlices(vector<int>& a) {
    
        int count = 0;
        int n = a.size();
        
        if(n <= 1)                                     
             return 0;  
        
        int diff = a[1] - a[0];
        int start = 0;
        
        for(int i=1; i<n; i++) {
            
            int start = i - 1;
            bool flag = false;
            
            while(i < n && a[i] - a[i-1] == diff) {
                i++;
                flag = true;
            }
            
            if(i < n && a[i] - a[i-1] != diff) {
                diff = a[i] - a[i-1];
            }
            
            int end = i - 1; 
            if(flag == true) {
          
                int len = end - start + 1;
                
                if(len == 3)                    
                    count += 1;
                
                if(len > 3) {
                  
                    // No of subarrays of len 3 = len - 3 + 1
                    // No of subarrays of len 4 = len - 4 + 1, and so on
             
                    // Possible subarrays from Longest subarray length K is (k-2)*(K-1)/ 2
                    count += (len - 2) * (len - 1) / 2;
                }   
                
                if(i == n)                      
                        break;
                i = i - 1;
            }
        }
        return count;
    }
    
};
