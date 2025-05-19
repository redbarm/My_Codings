#include <iostream>
#include <vector>
#include <string>

using namespace std;
//The constraint is there is only ONE ZERO in the SUB ARRAY
int findLength(string s){
    int left=0;
    int ans=0;
    int curr=0;
    for (int right=0;right<s.size();right++){
        if (s[right]=='0'){
            curr+=1;
        }
        while (curr>1){ //IF MORE THAN ONE ZERO
            if (s[left]=='0'){
                curr--;
            }
            left++;
        }
        ans=max(ans,right-left+1);
        }
    return ans;
}

int main(){
    string s="11001011";
    cout<<findLength(s)<<endl;
}