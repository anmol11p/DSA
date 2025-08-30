#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//? STL(STANDARD TEMPLATE LIBRARY)
//!Containers → Data ko store karne ke liye (ex: vector, list, set, map)
//!Iterators → Container ke andar traverse karne ke liye
//!Algorithms → Ready-made functions (ex: sort, binary_search, max, min) 
//!Functors → Functions ko objects ki tarah use karna (advanced, abhi baad me)

//* 1.reversed the vector 
/*
    void Reverse(vector <int>& nums){
        int length=nums.size();
        int i=0;
        while(i<=length)
        {
            // cout<<i<<" "<<length<<endl;
            int temp=nums[i];
            nums[i]=nums[length-1];
            nums[length-1]=temp;
            i++;
            length--;
            }
    
    }
*/    

// *2.✅ Question 2: 👉 Input: 1 2 2 3 4 4 5 👉 Output: 1 2 3 4 5 (remove duplicates using set)


int main(){

    //* 1. Vector (Dynamic Array)
//Normal array ka improved version hai.
        //Size automatically increase ho jata hai.
        /* vector <int> v;
            v.push_back(10);
            v.push_back(20);
            v.push_back(30);
            for(int x:v){
                cout<<x<<" ";
            } 
*/

    //! Question 1:👉 Input: 5 1 2 3 4 5  👉 Output: Reverse the vector → 5 4 3 2 1

        // vector <int> nums={1,2,3,4,5};
        // Reverse(nums);
        // for (int x:nums){
        //     cout<<x<<" ";
        // }
    //*2.Set (Unique sorted elements) => Automatically elements ko sort + unique banata hai.
    set <int> s;
    s.insert(10);
    s.insert(5);
    s.insert(10); //ignore duplicate element
    for (int x:s){
        cout<<x<<"  "; //return 5 10
    }
return 0;
}