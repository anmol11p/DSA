#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution{
    public:
    void findSubarray(vector <int> &nums){
        int max=INT_MIN;
        int length=nums.size();
        for(int i=0;i<length;i++){
            for(int j=i;j<length;j++){
            for(int k=i;k<=j;k++){
                cout<<nums[k]<<" ";
            }
            cout<<endl;
            }
        }
        
       
    }
    pair<int, vector<int>> findMaxSubArray(vector <int> &nums){
        int length=nums.size();
        int max=INT_MIN;
        int start=0,end=0;
         for(int i=0;i<length;i++)
         {
             for(int j=i;j<length;j++){
                int currSum=0;
               for(int k=i;k<=j;k++){
                currSum+=nums[k];
                    if(currSum>max){
                        max=currSum;
                        start=i;
                        end=j;
                    }
               }
            }
        }
          vector<int> subarray;
        for (int i = start; i <= end; i++) {
            subarray.push_back(nums[i]); //push_back is like append,append the element at the last
        }

        return {max, subarray};
        }


    pair <int ,vector <int>> kadaneMaxSubarray(vector <int> &nums)
    {
        int maxSum=nums[0];
        int start=0,end=0,s=0;
        int currSum=nums[0];
        int length=nums.size();
        for(int i=1;i<length;i++)
        {

        if(nums[i]>currSum+nums[i]){
            currSum=nums[i];
            s=i;//new index
        }
        else
        {
            currSum+=nums[i];
        }
        if (currSum>maxSum)
        {
            maxSum=currSum;
            start=s;
            end=i;
        }  
    }

        vector <int> subarray;
        for (int i=start;i<=end;i++){
            subarray.push_back(nums[i]);
        }
        return { maxSum,subarray};
    }     
    
    };

int main(){
    vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution s1;
    // s1.findSubarray(nums);
    //? find subarrays using Brute Force algorithm
        // auto result=s1.findMaxSubArray(nums);
        //   cout << "Maximum Sum = " << result.first << endl;
        //   cout << "Maximum Subarray= ";
        //   for (int i=0;i<result.second.size();i++)
        //   {
        //     cout<<result.second[i]<<" ";
        //   }
    //? find subarrays using kadane's algorithm
        //! ⚡ Kadane’s realizes: “I don’t need to try all. At each step, just decide whether to extend or restart.”

        auto result=s1.kadaneMaxSubarray(nums);
        cout<<"Max sum: "<<result.first<<endl;
        cout<<"Max subarray: ";
        for(int i:result.second){
            cout<<i<<" ";
        }
    return 0;
}


