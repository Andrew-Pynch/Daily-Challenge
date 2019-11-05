int factorial (int n); //line 1
int main(){
int n;
cout << “Enter a positive integer:”;
cin >> n;
cout<< “Factorial of “ << n << “is ” << factorial(n);
return 0;
}
int factorial (int n) {
if (n==1)
return 1;
else
return n * factorial (n - 1);
}
What if you have a function calls itself? As we did above, use a diagram to trace the code, line
by line, and explain what is happening behind the scene.
In addition, answer the following questions:
1. If user entered 5, how many times the factorial() will be executed?
2. What if line 1 is missing? Explain why.
3. What if “if (n==1) return 1; ” is missing? Explain why.
4. There is an int variable n in main function, and an int variable n in factorial function, are they
the same variable? 