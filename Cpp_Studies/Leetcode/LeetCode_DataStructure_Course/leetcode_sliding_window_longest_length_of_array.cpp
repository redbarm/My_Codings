#include <iostream>
#include <vector>
using namespace std;

int findLength(vector<int> &nums, int k){
    int left=0;
    int sum=0;
    int ans=0;
    for (int right=0;right<nums.size();right++){
        sum+=nums[right];
        while(sum>k){
            sum-=nums[left];
            left++;
        }
        ans=max(ans,right-left+1);
    }
    return ans;
}

int main(){
    vector <int> nums={3,1,2,7,4,2,1,1,5};
    int k=8;
    cout<<findLength(nums,k)<<endl;
}