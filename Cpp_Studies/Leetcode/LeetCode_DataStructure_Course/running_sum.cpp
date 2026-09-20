#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    vector<int> runningSum(vector<int> &vec){
        vector<int> result;
        int left=0;
        int total=0;
        while(left<vec.size()){
            total=total+vec[left];
            result.push_back(total);
            left++;
        }
        return result;
    }
};

int main(){
    Solution sol;
    vector<int> vec={1,2,3,4,5,6,7};
    sol.runningSum(vec);
    for (int val:sol.runningSum(vec)){
        cout<<val<<" ";
    }
    return 0;
}