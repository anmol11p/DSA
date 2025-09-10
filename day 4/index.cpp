#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int chocolateDistribute(vector <int>& nums,int m){
    int n=nums.size(); //7
    int ans=INT_MAX;
    
    sort(nums.begin(),nums.end());
    for(int i=0;i+m-1<n;i++) //0-7-3=4
    {
        int difference=nums[i+m-1]-nums[i];
        ans=min(difference,ans);
    }
    return ans;
}
int main()
{
    vector<int> nums={7, 3, 2, 4, 9, 12, 56};
    int m=3;
    cout<<chocolateDistribute(nums,m);
    return 0;
}