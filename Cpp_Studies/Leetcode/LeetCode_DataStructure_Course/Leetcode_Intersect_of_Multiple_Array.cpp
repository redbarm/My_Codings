#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution{
    public:
    vector<int> intersection(vector<vector<int>>& nums){
        int len=nums.size();
        unordered_map<int, int> counts;
        vector<int> store;
        for (int i=0;i<len;i++)
        {
            int sub_len=nums[i].size();
            for (int j=0;j<sub_len;j++){
                counts[nums[i][j]]++;
            }
        }

        for (auto [key,val]:counts)
        {
            if (val==len){
                store.push_back(key);
            }
        }
        return store;
    }
};

int main(){
    vector<vector<int>> nums={{3,1,2,4,5},{1,2,3,4},{3,4,5,6}};
    Solution solution;
    std::cout<<solution.intersection(nums)[0]<<std::endl;
    std::cout<<solution.intersection(nums)[1]<<std::endl;
    std::cout<<solution.intersection(nums)[2]<<std::endl;
    std::cout<<solution.intersection(nums)[3]<<std::endl;
    return 0;
}
