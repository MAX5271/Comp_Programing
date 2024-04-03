// LINK TO THE QUESTION : https://leetcode.com/problems/palindrome-number/
// CODE : https://leetcode.com/submissions/detail/1127682382/

#include<cmath>
class Solution {
public:
    bool isPalindrome(long int x) {
        if(x<0) return false;
        long int n1=x,n=x,c=0,temp;
        while(n){
         c++;
         n/=10;
        }
        n=0;
          while (n1){
              temp=n1%10;
              n=n+temp*pow(10,--c);
              n1/=10;
          }
          if(n==x)
          return true;
          else return false;
    }
};
