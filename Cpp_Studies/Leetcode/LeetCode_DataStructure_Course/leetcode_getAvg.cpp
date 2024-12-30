#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int len=nums.size();
        vector<int> index;
        vector<int> ans;
        index.push_back(nums[0]);
        for (int i=1;i<len;i++){
            index.push_back(index.back()+nums[i]);
            printf("indx: %d \n",index[i]);
        }
        
        for (int i=0;i<len;i++){
            if (i<k){
                ans.push_back(-1);
            }else if (i+k>=len){
                ans.push_back(-1);
            }else if (i==k){
                ans.push_back(index[i+k]/7);
            }else{
                ans.push_back((index[i+k]-index[i-k])/7);
            }
        }
        return ans;
    }
       
};

int main(){
    std::vector<int> nums={7,4,3,9,1,8,5,2,6};
    int k=3;
    Solution solution;
    printf("ans: %d \n",solution.getAverages(nums,k)[5]);
    return 0;
}