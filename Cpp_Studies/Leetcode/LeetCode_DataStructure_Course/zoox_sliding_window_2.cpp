#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution{
    public:
    int findLength(string s, int k){
        int left=0,len=s.size(), tmp=0,length=0;
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
    string s="1101100111";
    int k=8;
    cout<<sol.findLength(s,k)<<endl;
}