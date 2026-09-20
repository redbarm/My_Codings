#include <iostream>
#include <vector>

using namespace std;
class Solution{
    public:
    vector<int> maxSlidingWindow(vector<int>& vec, int k){
        int left=0;
        int right=k;
        int max=vec[right];
        vector<int> result;
        while (right<=vec.size()){
            for (int i=left;i<right;i++){
                if (vec[i]>max){
                    max=vec[i];
                }
            }
            result.push_back(max);
            left++;
            right++;
            }
            return result;
        }

    };

int main(){
    Solution sol;
    vector<int> vec={1,3,-1,-3,5,3,6,7};
    int k=3;
    for (int val:sol.maxSlidingWindow(vec,k)){
        cout<<val<<" ";
    }
    return 0;
}

