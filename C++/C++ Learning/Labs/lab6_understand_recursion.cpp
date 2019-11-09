// REVISIT REFERENCES
/*int main() {
    string sentence;
    get_sentence(sentence);
    cout << sentence << endl;
    return 0;
}

1. Can we change the value of the string inside the function if we match up the parameter and
argument names? For example, change the function prototype to: 
    void get_sentence(string sentence);
A: No! Unless we add the amersand &, the contents of the function are immutable

2. What is indeed passed into the function if an ampersand (&) is added in front of the
parameter?
A: The contents of the function call are passed through the function

3. Can we change the value of the string inside the function if we change the function
prototype to:
    void get_sentence(string *sentence);
A: Yes, affixing the parameter with star * will also allow you to pass it through the function

4. What is the difference between an ampersand (&) and an asterisk (*) added in front of the
parameter? Use a diagram to explain. 
A: * allows you to pass NULL values while & doesnt
*/

// UNDERSTAND RECURSION
/*
int factorial (int n);

int main() 
{
    int n;
    cout << "Enter a positive Integer";
    cin >> n;

    cout << "Factorial of " << n << "is " << factorial(n);

    return 0;
}

int factorial (int n) 
{
    if (n==1) {
        return 1;
    }
    else {
        return n * factorial (n - 1);
    }
}
*/

/*
What if you have a function calls itself? As we did above, use a diagram to trace the code, line
by line, and explain what is happening behind the scene.
In addition, answer the following questions:
1. If user entered 5, how many times the factorial() will be executed?
- 4 times!

2. What if line 1 is missing? Explain why.
- Code will not run: The function is never called 

3. What if “if (n==1) return 1; ” is missing? Explain why.
- Code will run 0 tusing sdt::cout;
using std::endl; y definition of what a factorial is)

4. There is an int using sdt::cout;
using std::endl; d an int variable n in factorial function, are they
the same variable? using sdt::cout;
using std::endl; 
- No they are not the same variable. Their scope only pertains to the scope of the function they are apart of
*/

// ITERATION V.S RECURSION
#include <sys/time.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
    typedef struct timeval time;
    time stop, start;

    gettimeofday (&start, NULL);
    // Time your iterative or recursive function here

    gettimeofday (&stop, NULL);
    if (stop.tv_sec > start.tv_sec) {
        cout << "Seconds: " << stop.tv_sec-start.tv_usec << endl;
    }
    else {
        cout << "Micro: " << stop.tv_usec-start.tv_sec << endl;
    }





    return 0;
}


int fib_iter(int n)
{
    int current_num = 1;

    for (int i = 1; i < n; i++)
    {
        current_num = (current_num - 2) + (current_num - 1);
    }

    return current_num;
}

int fib_recur(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib_recur(n - 1) + fib_recur(n - 2);
    }
    
}


// Fibonacci Application
/*
• How could you apply the Fibonacci number series to this problem?
- The fibbonaci sequences tells us small steps (n - 1) and big steps (n - 2) for any number of stairs n

• What are the base cases for counting the ways you can climb stairs by going one stair
or two stairs at a time? 
- 2 Stairs (can be climbed by)
    2 small steps
    1 big step

• How many different ways can you climb 4 stairs? 5 stairs?
4 stairs = 24 ways
5 stairs = 120 ways
*/
