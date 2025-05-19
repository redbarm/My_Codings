#include <iostream>
#include <vector>

using namespace std;
class Solution{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k){
    
        int left=0;
        //int product=1;
        int total=0;
        int ans=0;    
        for (int right=0;right<nums.size();right++){
            //product*=nums[right];
            total+=nums[right];
            //cout<<total<<endl;
            //while (product>=k){
            while ((total>=k)&&(left!=nums.size()-1)){
                //product/=nums[left];
                total-=nums[left];
                cout<<total<<endl;
                //if (total==k){cout<<"I am here"<<endl;return ans=right-left;}
                left++;
                if (total==k){cout<<"I am here"<<endl;return ans=right-left+1;}
            }
            ans+=right-left+1; 
        }
        return ans;
    }
}; 

int main(){
    Solution sol;
    vector<int> nums={10,5,7,9,10,2,6}; 
    //int k=100;//for product
    int k=8;//for total
    cout<<sol.numSubarrayProductLessThanK(nums,k)<<endl;
}

 