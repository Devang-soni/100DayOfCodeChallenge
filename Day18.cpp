//658. Find K Closest Elements
//Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:

// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b
 

class Solution {
public:
    
    vector<int> findClosestElements(vector<int>& v, int k, int x) {
    
        vector<int> res;
        
        // Sort the elements of v according to distance from x
        
        stable_sort(v.begin(), v.end(), [x](const auto a, const auto b) {
            return abs(a - x) < abs(b - x);  
        });
         
        v.resize(k);
        sort(v.begin(), v.end());
        
        return v;
    }
    
};
