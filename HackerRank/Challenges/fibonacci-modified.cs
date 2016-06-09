using System;
using System.Collections.Generic;
using System.Numerics;
using System.Linq;
using System.IO;
class Solution {
    static void Main(String[] args) {
        
        int n = 0;
        BigInteger valueAtIndex = 0, tn = 0, tn1 = 0, tn2 = 0;
        
        var values = Console.ReadLine().Split(' ').Select(s=>Convert.ToInt32(s)).ToArray();
        
        tn = values[0];
        tn1 = values[1];
        n = values[2];
        
        for(var i=2;i<n;i++) {
            tn2 = (tn1 * tn1) + tn;
            tn = tn1;
            tn1 = tn2;
        }
        
        Console.WriteLine(tn2);
    }
}