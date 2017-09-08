using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static int minimumAbsoluteDifference(int n, int[] arr) {
        Array.Sort(arr);
        var min = int.MaxValue;
        for(int i=0;i<n-1;i++) {
            min = Math.Min(min, Math.Abs(arr[i] - arr[i+1]));
        }
        return min;
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] arr_temp = Console.ReadLine().Split(' ');
        int[] arr = Array.ConvertAll(arr_temp,Int32.Parse);
        int result = minimumAbsoluteDifference(n, arr);
        Console.WriteLine(result);
    }
}
