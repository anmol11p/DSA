#include <iostream>
using namespace std;

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
     *a=&b;
     *b=&a;
    cout<<"after swapping a = "<<a<<" b = "<<b<<endl;

return 0;
}