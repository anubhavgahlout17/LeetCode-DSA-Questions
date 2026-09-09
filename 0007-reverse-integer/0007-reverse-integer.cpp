class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int digit = 0;
        int original = x;
        
        while(x != 0){
            digit = x%10;
            if (rev > 214748364 || (rev == 214748364 && digit > 7)) return 0;
        if (rev < -214748364 || (rev == -214748364 && digit < -8)) return 0;
            rev = rev * 10 + digit;
            x = x/10; 
        }
          return rev;
    }
};