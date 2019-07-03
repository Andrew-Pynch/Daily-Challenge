using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;
// 7-3-2019 @ Andrew Pynch
// C# implementation
// Please make a pull request and show changes that could make my code more optimal

/*
                    Problem Description
Given the nxm matrix A, return the sum of the largest possible hourglass.
An hourglass is defined to take the shape...
a b c
  d
e f g

EX 1: A = 6x6 Matrix
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
largest_hourglass_sum = 7
EX 2: A = 6x6 Matrix
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
largest_hourglass_sum = 19
*/

    
using System;

class Solution
{
    var rows = Console.ReadLine(); // Take user input for number of rows
    var col = Console.ReadLine(); // Take user input for number of columns
    static void Main(String[] args)
    {
        int[][] arr = new int[rows][];
        for (int rows = 0; rows < 6; rows++)
        {
            var tmp = Console.ReadLine().Split(' ');
            arr[i] = Array.ConvertAll(tmp, int.Parse);
        }

        int max = -9 * 7;
        for (int rows = 0; rows < 6; rows++)
        {
            for (int cols = 0; cols < 6; cols++)
            {
                if (cols + 2 < 6 && cols + 2 < 6)
                {
                    int sum = arr[rows][cols] + arr[rows][cols + 1] + arr[rows][cols + 2] + arr[rows + 1][cols + 1] + arr[rows + 2][cols] + arr[rows + 2][cols + 1] + arr[rows + 2][cols + 2];
                    if (sum > max) max = sum;
                }
            }
        }

        Console.WriteLine(max);
    }
}