using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Numerics;

//Each monkey on its branch.

class Solution {

     static void Main(string[] args)
     {
         BigInteger n = Convert.ToInt32(Console.ReadLine());
         var r = n;
         for (BigInteger i = 1; i < n; i++)
         {
             r = r * i;
         }
         Console.WriteLine(r);
     }
}
