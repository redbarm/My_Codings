#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <string>

using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        string ans="";
        int dotCnt=0;
        for (char c:path){
            if (ans.empty()){
                ans.push_back(c);
                if (c=='.'){
                    dotCnt++;
                }
            }else{
                if ((ans.back()=='/')&&(c=='/')){
                    continue;
                }else if ((c=='.')&&(ans.back()=='.')){
                    ans.push_back(c);
                    dotCnt++;
                    printf("I am in 1st \n");
                    printf("c: %c \n",c);
                }else if((c=='/')&&(ans.back()=='.')){
                    printf("I am in 2nd \n");
                    printf("dotCnt: %d \n",dotCnt);
                    if (dotCnt>=3){
                        ans.push_back(c);
                        dotCnt=0;
                    }else if (dotCnt==2){
                        printf("I am in 3rd \n");
                        ans.pop_back();
                        ans.pop_back();
                        if (ans.size()==1){
                            dotCnt=0;
                            break;
                        }else{
                            ans.pop_back();
                            while (ans.back()!='/'){
                            ans.pop_back();
                        }
                            dotCnt=0;
                        }
                    }else if (dotCnt==1){
                        printf("I am in 4th");
                        ans.pop_back();
                        //ans.pop_back();
                        if (ans.size()==1){
                            dotCnt=0;
                            break;
                        }
                        dotCnt=0;
                    }
                }else{
                    ans.push_back(c);
                    if (c=='.'){dotCnt++;}
                }
            }
        }
        
        if ((ans.size()!=1)&&(ans.back()=='/')){
            ans.pop_back();
        }
        return ans;
    }       
       
};

int main(){
    string s = "/.../a/../b/c/../d/./";
    Solution solution;
    cout<<solution.simplifyPath(s)<<endl;
    return 0;
}