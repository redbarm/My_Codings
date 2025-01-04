#include <iostream>
#include <string>
#include <unordered_map>
#include <stack>
#include <ctype.h>

using namespace std;

class Solution{
    public:
    stack<char> mystack;
    string ans="";
    string makeGood(string s){
        for (char c: s){
            if (ans.empty()){
                ans.push_back(c);
            }else{
                if (isupper(c)&&(tolower(c)==ans.back())){
                    ans.pop_back();
                }else if (islower(c)&&(toupper(c)==ans.back())){
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
    Solution sol;
    string s="s";
    cout<<sol.makeGood(s)<<endl;
}