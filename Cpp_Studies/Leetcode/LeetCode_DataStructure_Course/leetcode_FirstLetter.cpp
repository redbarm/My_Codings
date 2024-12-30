#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution{
    public:
    char FirstLetter(string &s){
        unordered_map<int, char> dic; //int: is key, char:is value
        int len=s.size();
        for (int i=0;i<len;i++){
            char tmp=s[i];
            if (dic.find(tmp)!=dic.end()){
                return tmp;
            }
            dic[s[i]]=i;
        }

        return ' ';
    }
};

int main(){
    //string s="abcdeda";
    string s={'a','b','c','d','e','d','a'};
    Solution solution;
    cout<<solution.FirstLetter(s)<<endl;
    return 0;
}