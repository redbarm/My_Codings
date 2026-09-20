#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int> &vec, int target){
        unordered_map<int,int> dic;
        int len=vec.size();
        int complement;
        for (int i=0;i<len;i++){
            complement=target-vec[i];
            if (dic.find(complement)!=dic.end()){
                return {i,dic[complement]};
            }
            dic[vec[i]]=i;
        }
        return{-1,-1};

    }
};

int main(){
    Solution sol;
    vector<int> vec={5,2,7,10,3,9};
    cout<<sol.twoSum(vec,7)[0]<<endl;
}
