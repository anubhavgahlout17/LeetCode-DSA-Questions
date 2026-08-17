class Solution {
public:
    bool isPalindrome(int x) {
        double rev = 0;
        int original = x;
        while(x > 0){
            int digit = x %10;
            rev = rev * 10 + digit;
            x = x/10;
        }
        if(original == rev){
            return true;
        }
        else{
            return false;
        }
        
    }
};