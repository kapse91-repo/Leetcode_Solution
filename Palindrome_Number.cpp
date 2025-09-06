class Solution {
public:
    bool isPalindrome(int x) {
     
        if (x < 0){ 
            return false;
        }
        
        long int original = x;
        long int reverse = 0;
        while (x > 0) {
            long int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        return reverse == original;
    }
};
