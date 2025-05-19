#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <string>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> matching {{'(',')'}, {'{','}'}, {'[',']'}};
        
        cout<<"HashMap associated closing character :"<<matching['(']<<endl;

        for (char c: s) {
            if (matching.find(c) != matching.end()) {
                cout<<c<<endl;
                cout<<matching[c]<<endl;
                stack.push(c);
            } else {
                cout<<"I am here and "<<"don't match character: "<<c<<endl;

                if (stack.empty()) {
                    return false;
                }
                
                char previousOpening = stack.top();
                cout<<"previous opening: "<<previousOpening<<endl;
                if (matching[previousOpening] != c) {
                    return false;
                }
                
                stack.pop();
            }
        }
        
        return stack.empty();
    }
};

int main(){
    string s = "({})";
    Solution solution;
    cout<<solution.isValid(s)<<endl;
    return 0;
}