public class Solution {
    public int MyAtoi(string str) {
        if (string.IsNullOrWhiteSpace(str))
            return 0;
        var s = str.ToCharArray();
        var l = s.Length;
        int i = 0, sign = 1, result = 0;
        while (s[i] == ' ') i++;
        if (s[i] == '-' || s[i] == '+')
        {
            sign = s[i] == '-' ? -1 : 1;
            i++;
        }

        while (i < l)
        {
            try
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    checked
                    {
                        result += s[i] - 48;
                        i++;
                        if (i != l && s[i] >= '0' && s[i] <= '9')
                            result *= 10;
                        else
                            break;
                    }
                }
                else
                {
                    result /= 10;
                    break;
                }
            }
            catch (Exception)
            {
                return sign == -1 ? int.MinValue : int.MaxValue;
            }
        }

        return sign * result;
    }
}