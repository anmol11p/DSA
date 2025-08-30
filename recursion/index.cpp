#include <iostream>
using namespace std;

//* ============= 20/08/2025 =================== 
// Recursion means a function calling itself to solve a problem.
// Instead of solving the problem in one big step, recursion breaks it into smaller subproblems until it reaches a base case (the simplest situation where no further call is needed).

//* Two key parts in recursion:

//*  Base Case → The stopping condition (without this, recursion never ends).

//* Recursive Call → The function calling itself with smaller input.

/* 

int sum(int a,int b){
    // base case
    if(a==b){
        return a ;
    }
    cout<<a<<endl;
    return sum(a+1,b);
}
*/

//!If N = 5, output should be: 5 4 3 2 1
/*
    int dec(int start,int end){
        if(start==end){
            return end;
        }
    cout<< start<<endl;
        return dec(start-1,end);
    }
        */



//! Write a recursive function to calculate the sum of first N natural numbers.
/*
   
        int sumUptoN(int a , int b){

        if(a>b){ //1 5,2 5, ...., 5 5,6 5
            return 0;
        }
        return ( a+sumUptoN(a+1,b));
    }
*/

//! Write a recursive function to find the maximum element in an array. 
/*
        int maxElement(int arr[],int size){
            if(size==1){
                return arr[0];
            }
            int max= maxElement(arr,size-1);    //={3,8,10,15,2}     
            return max<arr[size-1]?arr[size-1]:max; //3 2, 3 15, 15 10 ,15 8 ,3
            
            //**Returning back (comparisons)
            //  (3 vs 8) → 8
            // (8 vs 10) → 10
            // (10 vs 15) → 15
            // (15 vs 2) → 15 
            
        }
*/
  
//! Reverse a string using recursion.  //Input: "hello" --> "olleh" 
/*
    void reverse(char str[],int length){
        if(length<=1){
            return; //exits the function immediately
        }
        char temp=str[length-1];
        str[length-1]=str[0];
        str[0]=temp;
        // recursive call on substring excluding first and last
        reverse(&str[1],length-2);    
    }
*/

//! Fibonacci sequence using recursion. //0, 1, 1, 2, 3, 5, 8, 13..... 
/*
    int Fibonacci(int number){ 
     if(number==0){ 
        return 0;
     }
     if(number==1){ 
        return 1;
     }

     return Fibonacci(number-1)+Fibonacci(number-2);
    }
*/

    int main(){

    // int start=1;
    // int end=10;
    //* cout<<sum(start,end);

    //* cout<<dec(5,1);
    // int start=1;
    // int end=5;
    // cout<<sumUptoN(start,end);

    //* maximum element in array
    int arr[]={3,8,10,15,2}; //output shoul be 15
    //    cout<< maxElement(arr,5);
        
    //* Reverse a string
    // int length=0;
    // char str[]={'h','e','l','l','o'};
    //     for(int i=0;str[i]!='\0';i++){
    //         length+=1;
    //     }
    // reverse(str,length); 
    //     cout << "Reversed string: " << str << endl;

    
    //* Fibonacci sequence using recursion.
    // for(int i=0;i<=5;i++)
    // {
        // cout<<Fibonacci(6)<<" "; 
    // }
    
    return 0;
}