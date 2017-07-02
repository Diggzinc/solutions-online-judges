public class Solution {
    public int[] TwoSum(int[] nums, int target)
    {
        var dictionary = new Dictionary<int, int>(nums.Length);
        for (var i = 0; i < nums.Length; i++)
        {
            var a = nums[i];
            var b = target - a;
            if (dictionary.ContainsKey(b))
                return new[] {dictionary[b], i};
            dictionary[a] = i;
        }
        throw new Exception();
    }
}