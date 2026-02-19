#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution{
    public:
    int findLength(vector<int> &nums, int k){
        int left=0,len=nums.size(), tmp=0,length=0;
        for (int right=0;right<len;right++){
            tmp=tmp+nums[right];
            while(tmp>k){
                tmp=tmp-nums[left];
                left++;
            }
        length=max(length,right-left+1);
        }
        return length;
    }
};

int main(){
    Solution sol;
    vector<int> nums={3, 1, 2, 7, 4, 2, 1, 1, 5};
    int k=8;
    cout<<sol.findLength(nums,k)<<endl;
}
