#include <iostream>
#include <string>

bool check_uniq(std::string s){
    int len=s.size();
    bool ans=true;
    int i=0;

    while (i<len){
        for (int j=i+1;j<len;j++){
            if (s[i]==s[j]){
                ans=false;
                break;
            }
        }
        i++;
    }
    return ans;
}


int main(){
    std::string input="murrat";
    std::cout<<check_uniq(input)<<std::endl;
}