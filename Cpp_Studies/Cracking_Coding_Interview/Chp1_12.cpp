#include <iostream>
#include <string>
#include <algorithm>

bool check_if_chr_in_str(char c,std::string s);

bool check_str_perm(std::string s1, std::string s2)
{
    int s1_len=s1.size();
    int s2_len=s2.size();
    bool chk=true;
    bool ans=false;
    if (s1_len==s2_len){
        for (int i=0;i<s2_len;i++){
            chk=chk*check_if_chr_in_str(s2[i],s1);
        }
        ans=chk;
    }else{
        ans=false;
    }
 
    return ans;
}

bool check_if_chr_in_str(char c,std::string s){
    int len=s.size();
    int i=0;
    bool ans=false;
    while (i<len){
        if (s[i]==c){
            ans=true;
            break;
        }
        i++;
    }
    return ans;
}

int main(){
    std::string s1="adagozu";
    std::string s2="aadf";
    std::cout<<check_str_perm(s1,s2)<<std::endl;
    //sorting strings
    std::string s1sorted=s1;
    std::sort(s1sorted.begin(),s1sorted.end());
    std::cout<<s1sorted<<std::endl;
    //Splitting the array
    std::string splitteds1;
    int splt_size=3;
    for (int i=0;i<splt_size;i++)
    {
        splitteds1+=s1[i];
    }
    std::cout<<splitteds1<<std::endl;
    //Sliding window on string
    int window_size=3;
    std::string slideds1;
    for (int i=0;i<s1.size();i++){
        for (int j=i;j<i+window_size;j++){
            slideds1+=s1[j];
        }
        std::cout<<slideds1<<std::endl;
        slideds1.clear();
    }
}
