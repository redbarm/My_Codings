#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    float findMaxAvg (vector<int> &vec, int k){
    float avg;
    float total=0;
    int right=0;
    int left=0;
    float ans=-10000;
        while (right<vec.size()){
            total=total+vec[right];
            if (right>=k-1){
                avg=total/k;
                total=total-vec[left];
                left++;
            }
            if (avg>ans){
                ans=avg;
            }
            right++;
            }
        return ans;
        }
};

int main(){

    Solution sol;
    vector<int> vec={1,12,-5,-6,50,3};
    int k=4;
    cout<<sol.findMaxAvg(vec,k)<<" ";
    return 0;
}


