//1089. Duplicate Zeros

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

      for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 0) {
        int j;      
        for(j = arr.size()-2; j >= i+1; j--){
            arr[j+1] = arr[j];      
        }
        arr[j+1] = 0;
        i++;                         
        }
    }
    }       
};
