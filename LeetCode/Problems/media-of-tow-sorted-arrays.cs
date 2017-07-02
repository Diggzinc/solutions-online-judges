public class Solution {
    public double FindMedianSortedArrays(int[] nums1, int[] nums2) {
        var merged = nums1.Concat(nums2).ToArray();
        Array.Sort(merged);
        var n = merged.Length;
        return (double)(merged[(n - 1) / 2] + merged[n / 2]) / 2;
    }
}