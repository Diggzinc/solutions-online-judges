public class Solution {
    public string LongestPalindrome(string s)
    {
        var map = new Dictionary<char, List<int>>();
        var arr = s.ToCharArray();
        int start = 0, size = 1;

        //prepare
        for (var i = arr.Length - 1; i >= 0; i--)
        {
            if (!map.ContainsKey(arr[i]))
                map[arr[i]] = new List<int>();
            map[arr[i]].Add(i);
        }

        //solve
        for (var i = 0; i < arr.Length; i++)
        {
            foreach (var j in map[arr[i]])
            {
                if (j <= i) break;
                if (j - i + 1 < size) break;
                int left = i, right = j;
                var valid = true;
                do
                {
                    if (arr[left] != arr[right])
                    {
                        valid = false;
                        break;
                    }
                } while (++left <= --right);

                if (valid && size < j - i + 1)
                {
                    size = j - i + 1;
                    start = i;
                    break;
                }
            }
        }
        return s.Substring(start, size);
    }
}