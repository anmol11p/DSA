#include <iostream>
#include <vector>
using namespace std;

//!max min element
/*
    class Solution{
        public:
        int max= INT_MIN;
        int min= INT_MAX;
    void Max_Min(vector <int> &arr){
        for (int i=0;i<arr.size();i++)
        {
            if(arr[i]>max){
                max=arr[i];
            }
            else if(arr[i]<min){
                min=arr[i];
            }
        }
            } 
    void check_Max_Min(){
            cout<<"Maximum Elment: "<<max<<" Minimum Element: "<<min;
        }
    };
*/

//! Reverse Array
/* 

    class Solution {
        public:
        void reverseArray(vector<int> &arr) {
            // code here
            helper(arr,0,arr.size()-1);
        }
        private:
        
        void helper(vector<int> &arr,int start,int end){
            if(start>=){
                return;
            }
            
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            helper(arr,start+1,end-1);
            
        }
        
    };
*/
int main(){
//!1 Maximum and Minimum element in the array
vector <int> arr ={4,5,6,7,15,1,-2,-50,50};
Solution s1;
s1.Max_Min(arr);
s1.check_Max_Min();

//!2 Reverse the Array
/*
    vector <int> arr={1,4,3,2,6,5};
        Solution s1;
            s1.reverseArray(arr);
            for (int i=0;i<arr.size();i++){
                cout<<arr[i];
            }
*/    

    return 0;
}