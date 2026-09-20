#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    
    vector <int> SortSqr(vector<int> &vec){
        int left=0;
        int right=vec.size()-1;
        int pos=vec.size()-1;
        vector<int> result(vec.size());
        while (left<=right){
            if (abs(vec[left])>abs(vec[right])){
                result[pos]=vec[left]*vec[left];
                left++;
            }else{
                result[pos]=vec[right]*vec[right];
                right--;
            }
            pos--;
        }
        return result;

    }
};

int main(){
    Solution sol;
    vector<int> vec={-7,-3,2,3,11};
    sol.SortSqr(vec);
    for (int val:sol.SortSqr(vec)){
        cout<<val<<" ";
    }
    return 0;
}