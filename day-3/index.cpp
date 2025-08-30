#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool isDuplicate=false;
        int length=nums.size();
        vector <int> uniqueArr;

        for(int i=0;i<length;i++){
            int j=0;
            for(;j<uniqueArr.size();j++){
                if(nums[i]==uniqueArr[j]){
                isDuplicate=true;
                break;
                }

            }
            if(!isDuplicate)uniqueArr.push_back(nums[i]);
        }
        return isDuplicate;
    }   
};
int main()
{
    Solution s1;
     vector <int> nums = {1,2,3,1};
    cout<<boolalpha<<s1.containsDuplicate(nums);
    return 0;
}