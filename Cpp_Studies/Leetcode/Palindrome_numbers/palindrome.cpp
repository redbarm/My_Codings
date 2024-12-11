#include <iostream>
#include <string.h>

class Solution{
public:
    bool isPalindrome(int x) {
    //string num_str,num_str_rev;
    char num_str[11],num_str_rev[11];
    int num_int_rev;
    bool ans;
    sprintf(num_str,"%d",x);
    //std::string buffer=num_str;
    //int len=buffer.size(); //instead of this use strlen
    int len=strlen(num_str);
    for (int i=0;i<len;i++)
    {
        num_str_rev[i]=num_str[len-i-1];
    }
    num_int_rev=atoi(num_str_rev);
    if (x==num_int_rev){
        ans=true;
    }else{
        ans=false;
    }
    return ans;
    }
};

int main(){
    Solution output;
    int x=121;
    std::cout<<output.isPalindrome(x)<<std::endl;
    //char chararray[10] = { 0 };
    char chararray[10] = "murat";
    size_t len = strlen(chararray);
    std::cout<<len<<std::endl;
    std::string test="murat";
    std::cout<<test.size()<<std::endl; //size() only works with strings
    return 0;
}
 
