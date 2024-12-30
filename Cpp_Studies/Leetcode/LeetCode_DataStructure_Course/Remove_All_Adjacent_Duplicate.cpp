#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <string>

using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        
        for (char c: s) {
            if(ans.empty()){
                ans.push_back(c);
            }else{
                if (c==ans.back()){
                    ans.pop_back();
                }else{
                    ans.push_back(c);
                }
            }
        }
        
        return ans;
    }
};

int main(){
    string s = "abbaca";
    Solution solution;
    cout<<solution.removeDuplicates(s)<<endl;
    return 0;
}