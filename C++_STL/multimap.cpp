#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    /* Function to find the
    factorial of a number*/
    int factorial(int n) {
        // Variable to store the factorial
        int fact = 1;

        // Iterate from 1 to n
        for(int i = 1; i <= n; i++) {
            // Multiply fact with current number
            fact = fact * i;
        }
        
        // Return the factorial stored
        return fact;
    }
};

int main()
{
    int n = 8;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    // Function call to find the factorial of n
    int ans = sol.factorial(n);
    
    cout << "The factorial of given number is: " << ans;
    
    return 0;
}