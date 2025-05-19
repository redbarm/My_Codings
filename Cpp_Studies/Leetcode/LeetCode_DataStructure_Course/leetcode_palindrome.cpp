#include <iostream>
#include <string>
using namespace std;
class Solution{
    public:
    bool check_if_palindrome(string &s){
        int len=s.size();
        int left=0;
        int right=len-1;
        bool ans=true;
        while (left<right){
            if (s[left]!=s[right]){
                return false;
            }else{
                //do nothing
            }
        left++;
        right--;
        }
        return ans;  
    }
};

int main(){
    Solution sol;
    //string s="racecar";
    string s="murat";
    cout<<sol.check_if_palindrome(s)<<endl;
    return 0;
}
