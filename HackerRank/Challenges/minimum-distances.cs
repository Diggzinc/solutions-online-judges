using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] A_temp = Console.ReadLine().Split(' ');
        int[] A = Array.ConvertAll(A_temp,Int32.Parse);
        int min = int.MaxValue;
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(j!=i && A[j] == A[i]) {
                    min = Math.Min(min, Math.Abs(i-j));
                }
            }   
        }
        Console.WriteLine(min == int.MaxValue ? -1 : min);
        
    }
}
