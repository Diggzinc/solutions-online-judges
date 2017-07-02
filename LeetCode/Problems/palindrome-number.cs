public class Solution {
    public bool IsPalindrome(int x) {
        if (x < 0) return false;

        long n = 1,
             y = x, 
             z = x;
        while (y != 0)
        {
            y /= 10;
            n*=10;
        }
        while (n/10 != 0)
        {
            n /= 10;
            var a = x / n % 10;
            var b = z % 10;
            if (a != b) return false;
            z /= 10;
        }
        return true;
    }
}