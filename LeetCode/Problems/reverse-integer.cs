public class Solution {
    public int Reverse(int x) {
            var n = 0;
            while (x != 0)
            {
                try
                {
                    checked
                    {
                        n += x % 10;
                        x /= 10;
                        if (x != 0)
                            n *= 10;
                    }
                }
                catch (Exception)
                {
                    return 0;
                }
            }
            return n;
    }
}