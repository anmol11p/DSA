#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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
/*

    set <int> removeDuplicate(vector <int>& nums){
        set <int> unique;
        for (int i=0;i<nums.size();i++)
        {
        unique.insert(nums[i]);
        }
        return unique;
    }
*/

//*3 checkDuplicates using unordered_set
/*
    bool checkDuplicates(vector <int>& nums)
    {
        unordered_set <int> unique;
        for(int i=0;i<nums.size();i++)
        {
            unique.insert(nums[i]);
        }
        if(unique.size() != nums.size()){
            return false;
        }
        else{
            return true;
        }
    }
*/
//*4 count frequency of each number in an array
/*
    void frequencyCheck(vector <int> & nums){
        map <int,int> mp;
        int count=1;
        for (int i=0;i<nums.size();i++){
            if(mp[nums[i]]){
                mp[nums[i]]=count+1;
            }
            else{

            mp[nums[i]] = count;
            }
        }
        for(auto x:mp){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
*/
//*5  
/*👉 Find the first element that appears twice in an array.
    void firstRepeat(vector <int> & nums){
        unordered_map <int,int> mp;
        for (int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;//“increase the count of nums[i] by 1 in the map
            if (mp[nums[i]] > 1) {   
                // cout << nums[i];
                // return;
            }
            
            
        }
        for(auto x:mp){
            cout<<x.first<<" "<<x.second<<endl;
        }
        
    }
*/   
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
           //set <int> s;
           //s.insert(10);
           //s.insert(5);
           //s.insert(10); //ignore duplicate element
           //for (int x:s){
           //    cout<<x<<"  "; //return 5 10
    //}
    //!Q2
        // vector <int> nums={1,2,2,3,4,4,5};
        // auto result=removeDuplicate(nums);
        // for(int x:result){
        //     cout<<x;
        // }
    //*3.Unordered Set (Unique + Fast, no sorting) 
        //Unique rakhta hai lekin order fix nahi hota.
        //Average O(1) search time.
        // unordered_set <int> s;
        //     s.insert(100);
        //     s.insert(50);
        //     s.insert(100);
        // for(int x:s){
        //     cout<<x; //order random hoga
        // }  
    //!Q3 Check if an array has duplicates (fastest way).  
                // vector <int> nums={1,2,3,4,1,2};
                // cout<<che4. 
    //*4 Map (Key-Value pair, sorted by key)
        // map<int,string> mp;
        // mp[1]="One";
        // mp[2]="Two";
        // mp[3]="three";
        
        // for(auto p:mp){
        //     cout<<p.first<<" "<<p.second<<endl;
        // }
    //!Q4 👉 Count frequency of each number in an array. 
    //Input: [1,2,2,3,1] => 1 -> 2 , 2 -> 2,3 -> 1    
        // vector <int> nums={1,2,2,3,1};
        // frequencyCheck(nums);
    //*5 Unordered Map (Key-Value, but faster)
        // unordered_map <string,int> mp;
        // mp["orange"]=2;
        // mp["banana"]=1;
        // cout<<mp["banana"]; //1
    //!Q5 👉 Find the first element that appears twice in an array.
        // vector <int> nums={0,0,1,2,2,3};//output->1
        // firstRepeat(nums); 
    //*   ========== Algorithm========================
        //?sort 
        vector <int> vec={5,2,9,1,5};
        // sort(vec.begin(),vec.end());
        // cout<<"sorted: ";
        // for(auto x:vec){
        //     cout<<x<<" ";
        // }
        // sort(vec.rbegin(),vec.rend()); //*descending order
        // for(auto x:vec){
        //     cout<<x<<" ";
        // }
        //?reverse
        // reverse(vec.begin(),vec.end()); 
        // for(auto x:vec){
        //     cout<<x<<" ";
        // }
        //?maxElement
            // cout<<*max_element(vec.begin(),vec.end());//* derefernce is necessary
        //?count the element
            // cout<<count(vec.begin(),vec.end(),5);
        //? binary_search return t/f value if element found
        //!remember element is sorted
        // sort(vec.begin(),vec.end());
        // int x=2;
        //     if(binary_search(vec.begin(),vec.end(),x)){
        //             cout << x << " found!" << endl;
        //         }
        //         else{
        //                 cout << x << " not found!" << endl;

        //         }

return 0;
}