#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// NEXT PERMUTATION

vector <int> reverse (vector <int> & nums,int start)
{

     int length =nums.size();
     while(start<length){
     int temp=nums[length-1];
        nums[length-1]=nums[start];
        nums[start]=temp;
        start++;
        length--;
     }

     return nums;
}
class Permutation {
    public:
    vector <int> next_permutation(vector <int> & nums){
            int length =nums.size();
            int pivot=-1;
        //?find pivot
            for( int i=length-1;i>=0;i--){
                if(nums[i]<nums[i+1]){
                pivot=i;
                break;
                }
            }
             if(pivot==-1)
            {
                 reverse(nums,0);
                 return nums;
            }
            
        //? find exact greater element than pivot
             int j=-1;
//* Agar loop length-1 se start kare
//* i = length-1 → matlab last element.
//* Uske liye nums[i+1] = nums[length] access hoga → out of range (invalid index) ❌.
              for( int i=length-2;i>=0;i--){
                if(nums[i]>nums[pivot]){
                j=i;
                break;
                }
            }
          
        //? swap pivot and and j
                int temp=nums[pivot];
                nums[pivot]=nums[j];
                nums[j]=temp;
                for (int y:nums){
                    cout<<"Y"<<y<<endl;
                }

        //?  reverse the suffix
            return reverse(nums,pivot+1);
    }
};

int main()
{
    vector <int> nums={1,4,3,2};
    Permutation P1;
    for (int x:P1.next_permutation(nums))
    {
        cout<<x;
    }
    return 0;
}