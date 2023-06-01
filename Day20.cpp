//719. Find K-th Smallest Pair Distance
//The distance of a pair of integers a and b is defined as the absolute difference between a and b.

//Given an integer array nums and an integer k, return the kth smallest distance among all the pairs
//nums[i] and nums[j] where 0 <= i < j < nums.length.

class Solution {
public:
    bool check(vector<int> &a, int mid, int k, int n) {
        
        int total = 0;
        int j = 0; 
        
        for(int i=0; i<n; i++) {
            
            while(j < n && a[j] - a[i] <= mid)                     
                j++;
            
            j--;
            total += j - i;                    
        }
        
        if(total >= k)                                              
            return true;
        else                                                        
            return false;
    }
    
    int smallestDistancePair(vector<int>& a, int k) {
    
        int n = a.size();
        sort(a.begin(), a.end());
        
        int start = 0, end = a[n-1] - a[0];
        
        while(start < end) {
        
            int mid = start + (end - start) / 2;
            
            if(check(a, mid, k, n) == true)                        
                end = mid;
            else                                                   
                start = mid + 1;
        } 
        return start;
    }
    
};
