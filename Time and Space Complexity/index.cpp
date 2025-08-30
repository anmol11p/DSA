#include <iostream>
using namespace std;


//! 1. What is Time Complexity?

/* 
        If you have 10 numbers, how much time will your code take?
        If you have 10,000 numbers, will it take double the time? Or 1000 times the time?

        int main() {
            int n = 5;
            for(int i=0; i<n; i++){   // runs n times
                cout << i << " ";
            }
            return 0;
        }

        Loop runs n times.
        If n=5, 5 operations.
        If n=1000, 1000 operations.
        So, Time Complexity = O(n) (linear).
*/

//! 2.What is Space Complexity?
/* 
Space complexity tells us how much extra memory the program uses.

This includes:
Variables
Arrays / Data structures
Function call stack
*/ 
int main()
{
    cout<<"hello world";
    return 0;
}