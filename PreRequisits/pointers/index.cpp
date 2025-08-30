#include <iostream>
using namespace std;

void swapVariable(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main(){
//!Declare an integer variable and print its value and address using a pointer.   
/*
        int a=10;
        int *ptr=&a;
        cout<<*ptr; //10
        cout<<&a; //address=100x61fe44
*/ 


//! Swap two numbers using pointers.
 
    int a=10;
    int b=20;

    cout<<"Before swapping a = "<<a<<" b = "<<b<<endl;
    // after swapping b=10 a=20

    swapVariable(&a,&b);
    cout<<"after swapping a = "<<a<<" b = "<<b<<endl;



//! Find the maximum element of an array using pointers.
/*
    int size=4;
    int arr[4]={10,8,15,1};

    int *max=&arr[0];
    for (int i=0;i<size;i++){
        if(arr[i]>*max){
            *max=arr[i];
        }
    }
    cout<<*max;
*/
//! Reverse an array using pointers.
/*
    int size=4;
    int arr[4]={10,8,15,1};
    int *start=&arr[0];
    int *end=arr+size-1; //arr + 1   → &arr[1]   // points to 2nd element
                        // arr + 2   → &arr[2]  points to 3rd elemen
                        // Index:   0    1    2    3
                        // Value:  10    8   15    1

    while(start<end){
        // swap 
        int temp=*start;
        *start=*end;
        *end=temp;
         // move pointers
        start++;
        end--;
    }

    // print the array
    for (int i= 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
*/        
//! Explain the difference between * (dereference) and & (address-of) with code.

// * contains the value with the help of address of variable
// & gave the address of variable
    return 0;
}