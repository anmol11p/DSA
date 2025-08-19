#include <iostream>
using namespace std;

//!Write a function int add(int a, int b) that returns the sum of two numbers. 
    
    //* function declare
/*
 int add(int a,int b);
   int main(){
       cout<<add(10,20);
       return 0;
   }

   int add(int a,int b){  //*function definition
       return a+b;
           }
*/   

//! Write a function int factorial(int n) that calculates and returns the factorial of a number. 
/*

        int factorial(int n);
        int main(){
            int number;
            cout<<"Enter no. to get its factorial: ";
            cin>>number;
            cout<<factorial(number);
        return 0;  
        }

        int factorial(int n){
            if(n==1){
                return 1;
            }
            else{
                int factorial=1;
        for(int i=n;i>1;i--){
                factorial*=i;
            }
            return factorial;
            }
            
        }
*/
//! Write a function int findMax(int arr[], int n) that takes an array and returns the maximum element.
/*
        int findMax(int arr[ ],int n);

        int main(){
            int arr[]={-1,-3};
            cout<<findMax(arr,2); //o-p : -1
            return 0;
        }
        int findMax(int arr[],int n){
            int maxValue=arr[0];
            for(int i=0;i<n;i++){
                if(arr[i]>maxValue){
                    maxValue=arr[i];
                }
            }
            return maxValue;
        }

*/




// ! pass by value
//* generally if we pass any argument to the function it's value going in copied form, i.e function accessing this argument make memory on different location
 
/*
    Soch lo tumhare paas ek notebook hai.

    Tum main() function me likhe number 5 ko kisi aur function ko dete ho.

    Function ko asli notebook nahi milti, balki uski photocopy milti hai.

    Matlab function jo bhi likhe/mittaye us photocopy me karega, original notebook untouched rahegi. 
*/

// ! pass by refrence
 /*
   opposite to pass by value,
   here actual memory location has beeen shared between functions,
   example swapping of two numbers

   in argument we use &a,&b for sending address (address of a,address of b)
    int a = 10;
    cout << a;   // prints: 10 (value)
    cout << &a;  // prints: some memory address like 0x61ff08

   in parameter we use return_type *a,*b
   *a → "value at address a,eg=>10"
 */




//! make function to swap two number
/*
    void swap(int *x,int *b);
    int main(){
        int a=10;
        int b=5;
        cout <<"before swap "<<"a = "<<a<<" b = "<<b<<endl;
        swap(&a,&b);
        cout <<"after swap "<<"a = "<<a<<" b = "<<b;
        //? cout<<&a; //0x61fe4c
        return 0;
    }
    void swap(int *x,int *y){ //10,5
    int temp=*x; //10
    *x=*y; //5
    *y=temp; //10

    }
*/

 /*
    👉 Write a recursive function int fibonacci(int n) that returns the nth Fibonacci number.

    Example: fibonacci(6) → 8
    (Covers: Recursion, base condition, stack understanding) 
    0 1


    */