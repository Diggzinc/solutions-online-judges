public class Solution {
    public string Convert(string s, int numRows)
    {
        var str = s.ToCharArray();
        var size = str.Length;

        if (size == 1 || numRows == 1)
            return s;

        var n = numRows;
        var result = new char[size];
        for (int i = 0, k = 0; i < n; i++)
        {
            var j = i;
            while (j < size)
            {
                result[k] = str[j];
                k++;
                j += n + (n - 2);
                if (i != 0 && i != n - 1)
                {
                    var w = j - 2 * i;
                    if (w < size)
                    {
                        result[k] = str[w];
                        k++;
                    }
                }
            }
        }
        return new string(result);
    }
}