// 7-3-2019 @ Andrew Pynch
// C # implementation
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
   // n_Rows = number of rows in our matrix
   // n_Cols = number of columns in our matrix
   int n_Rows = Convert.ToInt32(Console.ReadLine()); // User input 
   int n_Cols = Convert.ToInt32(Console.ReadLine());; 

   static void Main(String[] args)
   {
       Random random = new Random(); // Variable to populate matrix
       int[ , ] arr = new int[n_Rows, n_Cols]; // arr = Array with dimensions NxM
       // Populate the matrix
       for (int n = 0; n < n_Rows; n++)
       {
           for (int m = 0; m < n_Cols; m++)
           {
               arr[n,m] = random.Next(0, 25); // Populate with values 0 through 25
           }
           Console.WriteLine(arr);
       }
       // We will index our matrix by the ith row and jth column
       int maxSum = 0;
       for (int i = 0; i < n_Rows; i++)
       {
           for (int j = 0; j < n_Cols; j++)
           {
               int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
               if (sum > maxSum)
               {
                   maxSum = sum;
               }
           }
       }
       Console.WriteLine(maxSum);
   }
}