#include <iostream>
//#include <cstring>
#include <string.h>

class Solution{
public:
int myAtoi(std::string s) {
int sgn=1,ans;
std::string str;
char ans_str[12];
str=s;
int len=str.size();
std::cout<<"len = "<<len<<std::endl;
int indx=0;
int i=0;
while (i<len)
{
    if (len==0){
        ans_str[0]='1';
        std::cout<<" bos karakterli yerdeyim"<<std::endl;
        sgn=0;
        break;
    }
    if (str[i]=='.'){
        if (indx==0){
            ans_str[0]='1';
                sgn=0;
            }
            std::cout<<". dayim";
                break;
            }
    if (str[i]==' ') {
        //do nothing
    }else if((str[i]=='+')&&(isdigit(str[i+1]))){
        sgn=1;
    }else if((str[i]=='-')&&(isdigit(str[i+1]))){
        sgn=-1;
    }else if ((isdigit(str[i])==false)&&(indx==0)&&(str[i]!='+')&&(str[i]!='-')){
        sgn=0;
    }else if ((str[i]=='+')&&(str[i+1]=='-')){
        std::cout<<"+ - li case deyim"<<std::endl;
        sgn=0;
        if (indx==0){
            ans_str[0]='1';
        }
        break;
    }else if ((str[i]=='-')&&(str[i+1]=='+')){
        std::cout<<"- + li case deyim"<<std::endl;
        sgn=0;
        if (indx==0){
            ans_str[0]='1';
        }
        break;
    }else if (isdigit(str[i])){
        ans_str[indx]=str[i];
        indx++;
    }
    i++;
}
    if (strlen(ans_str)>10){
        ans=2147483648*sgn;
    }else{
        std::cout<<"sondayim";
        std::cout<<ans_str[0]<<std::endl;
        if (ans_str[0]=='\0'){
            ans=0;
        }else{
            ans=std::stoi(ans_str)*sgn;
        }
    }
        return ans;
}
};

int main(){
    Solution output;
    //std::string s="words and 987";
    //std::string s="-91283472332";
    std::string s="+-12";
    std::cout<<"size of input string: "<<s.size()<<std::endl;
    std::cout<<output.myAtoi(s)<<std::endl;
    return 0;
}
 
