#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        //cout<<right<<endl;
        while (left<right){
            char tmp=s[right];
            s[right]=s[left];
            s[left]=tmp;
            //cout<<s[right]<<endl;
            //cout<<s[left]<<endl;
            left++;
            right--;
        }    
    }
};

int main (){
    Solution sol;
    vector<char> s={'h','e','l','l','o'};
    sol.reverseString(s);
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s[2]<<endl;
    cout<<s[3]<<endl;
    cout<<s[4]<<endl;
}