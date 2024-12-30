#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
class Solution{
    public:
    int missingNumber(vector<int> &nums){
        unordered_map<int, int> dic; //int: is key, int:is value
        int len=nums.size();
        sort(nums.begin(),nums.end());
        for (int i=0;i<len;i++){
            if (nums[i]!=i){
                return i;
            }
        }
        return len;
    }
};

int main(){
    vector<int> nums={3,1,2};
    Solution solution;
    cout<<solution.missingNumber(nums)<<endl;
    return 0;
}