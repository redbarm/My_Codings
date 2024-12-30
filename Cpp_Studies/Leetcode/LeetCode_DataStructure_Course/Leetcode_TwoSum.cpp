#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution{
    public:
    vector<int> twoSum(vector<int> &nums, int target){
        unordered_map<int, int> dic;
        int len=nums.size();
        int complement;
        for (int i=0;i<len;i++){
            complement=target-nums[i];
            if (dic.find(complement)!=dic.end()){
                return {i,dic[complement]};
            }
            dic[nums[i]]=i;
        }

        return {-1,-1};
    }
};

int main(){
    vector<int> nums={5,2,7,10,3,9};
    Solution solution;
    cout<<solution.twoSum(nums, 5)[0]<<endl;
    cout<<solution.twoSum(nums, 5)[1]<<endl;
    return 0;
}

