#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//! Search in Rotated Sorted Array
//? Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low<=high)
        {
            // code
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
                break;
            }
            // check left half is sorted or not
            if(nums[low] <=nums[mid]){
                // check target present in left part or not
                if(nums[low]<=target && target<nums[mid])
                {
                      high =mid-1; // search left
                }
                // not present in left part
                else{
                    low=mid+1; //search right
                }
            }

            else{
                if (nums[mid]<target && target<=nums[high])
                {
                    low=mid+1;// search right
                }
                else{
                    high=mid-1;// search left
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution s1;
   vector <int> nums= {4,5,6,7,0,1,2}; //4
   int target=0;
    cout<<s1.search(nums,target);
    return 0;
}