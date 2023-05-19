//67. Add Binary
//Given two binary strings a and b, return their sum as a binary string.

class Solution {
public:
    string addBinary(string a, string b) {


      //   string result;
      //   int i = a.length()-1 , j=b.length()-1;
      //   int carry = 0 ;
      //   while(i>=0 || j>=0){
      //     int sum = carry;
      //     if(i>=0) sum+= a[i--] -'0';
      //     if(i>=0) sum+= b[i--] -'0';
      //     carry = sum >1 ? 1 : 0;
      //     result += to_string(sum%2);

      //   }
      // if(carry) result += to_string(carry);
      // reverse(result.begin() , result.end());
1    // return result ;
  
  


  string res;
    int i =a.size()-1 , j=b.size()-1;
    int sum , carry = 0;
    while(i>=0 || j>=0){
      sum =carry;
      if(i>=0) sum+= a[i]-'0';
      if(j>=0) sum += b[j]-'0';
      res += to_string(sum%2);
      carry = sum / 2;
      i-- ; j-- ;


    }
    if (carry!= 0) res +='1';
    reverse(res.begin() , res.end());
    return res;
     }
};
