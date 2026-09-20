#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    vector<char> reverseString(vector<char> &s){
        int len=s.size();
        int right=len-1;
        int left=0;
        char tmp;
        while (left<right){
            tmp=s[left];
            s[left]=s[right];
            s[right]=tmp;
            left++;
            right--;
        }
        return s;
    }
};

int main(){
Solution Sol;
vector<char> s={'a','b','c','d','e'};
Sol.reverseString(s);

for (char val:s){
    cout<<val<<" ";
}

return 0;
};



