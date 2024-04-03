// LINK TO THE QUESTION : https://leetcode.com/problems/power-of-two/
//https://leetcode.com/submissions/detail/1063294694/

class Solution {
public:
    bool isPowerOfTwo(int n) {
    if(n==1)
    return true;
    else if(n<=0)
    return false;
    else{
    while(true){
        if(n==1)
        {return true;
        break;
        }
        else if (n%2==1){
        return false;
         break; 
        }
        n/=2;
    }
    } 
    }
    
};
