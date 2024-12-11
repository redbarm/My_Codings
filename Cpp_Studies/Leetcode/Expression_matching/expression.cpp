#include <iostream>
//#include <cstring>
#include <string.h>

class Solution{
public:
bool isMatch(std::string s, std::string p) {
        int p_len=p.size();
        int s_len=s.size();
        bool ans;
        if (p_len<s_len){
            ans=false;
            std::cout<<"len ler esit degil";
        }else{
            for (int i=0;i<p_len;i++){
                if (p[i]=='*'){
                    p[i]=p[i-1];
                    std::cout<<i<<" inci karakter 8"<<std::endl;
                }
            }
            for (int i=0;i<p_len;i++){
                if (p[i]=='.'){
                    p[i]=s[i];
                }
            }
        }
        std::cout<<"cevap p: "<<p<<std::endl;
        //s_chr=s;
        //p_chr=p;
        char* s_chr = new char[s.size()+1];
        char* p_chr = new char[p.size()+1];
        strcpy(s_chr, s.c_str());
        strcpy(p_chr, p.c_str());

        if (strstr(p_chr,s_chr) != NULL) {
        //if (strcmp("pic","am")) {
            ans=true;
            std::cout<<"dogru"<<std::endl;
        }else{
            ans=false;
        }
        return ans;      
    }

};

int main(){
    Solution output;
    std::string s="aabb";
    std::string p="a*b*c";
    std::cout<<output.isMatch(s,p)<<std::endl;
    return 0;
}
 
