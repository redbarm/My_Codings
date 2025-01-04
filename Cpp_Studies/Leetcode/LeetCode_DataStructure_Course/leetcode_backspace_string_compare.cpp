#include <iostream>
#include <string>
#include <unordered_map>
#include <stack>

using namespace std;

class solution{
    public:
    stack<char> mystack;
    bool ans=false;
    bool backspaceCompare(string s,string t){
        int len=s.size();
        for (int i=0;i<len;i++){
            if (s[i]==t[i]){
                //Don't do anything
            }else if (s[i]=='#'&&t[i]=='#'){
                mystack.pop();
            }else{
                mystack.push(s[i]);
            }
        }
        if (mystack.empty()){
            ans=true;
        }
        return ans;
    }

};

int main(){
    solution sol;
    string s="ab#c";
    string t="ab#c";
    cout<<sol.backspaceCompare(s,t)<<endl;
}