#include <iostream>
#include <string>

std::string lengthOfLongestSubstring(std::string s);

int main(){
std::string s="murat";
std::cout<<s[1];
std::cout<<s.size();
std::string am="";
am[0]=s[1];
std::cout<<am;
std::cout<<lengthOfLongestSubstring(s);

return 0;
}

std::string lengthOfLongestSubstring(std::string s) {
    //std::string subset="orospu cocugu";
    std::cout<<s.size();
    std::string subset="";
    
    //subset[0]=s[0];
    //subset[1]=s[1];
    //subset[2]=s[2];
    //subset[3]=s[3];
    //subset[4]=s[4];
    //subset[5]='\0'; bunlar calismiyor

    //subset=subset.append(s); //Orospu cocugu only accepts string
    //subset.push_back(s[0]);
    //subset.push_back(s[1]);
    //subset.push_back(s[2]);
    //subset.push_back(s[3]);
    //subset.push_back(s[4]);

    for (int i=0;i<4;++i){ // Why this son of the bitch code did not work I have no idea!!!!!!!!!!!!!!!!!!!!!!!!!
        subset.push_back(s[i]);
    }

return subset;
}
