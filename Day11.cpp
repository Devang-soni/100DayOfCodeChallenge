//16. 3Sum Closest
// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution

class Solution {
public:
    
    int threeSumClosest(vector<int>& a, int tar) {
    
        int ans;
        
        int n = a.size();
        sort(a.begin(), a.end());
        
        int pSum = a[0] + a[1] + a[n-1];
        
        for(int i=0; i<n-2; i++) {
            
            int start = i + 1;
            int end = n - 1;
            
            while(start < end) {
                
                int cSum = a[i] + a[start] + a[end];
                
                if(cSum == tar)                       
                    return cSum;

                else if(cSum < tar)                   
                    start++;
                else                                    
                    end--;
                
                if(abs(cSum - tar) < abs(pSum - tar))          
                    pSum = cSum;
            }
        }
        
        ans = pSum;
        return ans;
    }
    
};
