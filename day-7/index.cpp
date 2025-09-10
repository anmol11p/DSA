#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

//! LEET CODE--> 121. Best Time to Buy and Sell Stock 
class Solution {
public:
    int maxProfit(vector<int>& nums) {
        // edge case
        int length=nums.size();
        int maxProfitValue=0;
        int buyDay=nums[0];
        if(length==1){
            return 0;
}
       for(int i=0;i<length;i++){
        if(nums[i]<buyDay){
            buyDay=nums[i];

}       
        else{
            int profit =nums[i]-buyDay;
            if (profit > maxProfitValue) {
                    maxProfitValue = profit;
                }
        }
}
return maxProfitValue;
}


};

int main()
{
Solution s1;
vector <int> prices = {7,1,5,3,6,4};
cout<<s1.maxProfit(prices);
return 0;
}