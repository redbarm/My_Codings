#include <iostream>
#include <string>

int lengthOfLongestSubstring(std::string s);

int main(){
std::string s="murat";
std::cout<<lengthOfLongestSubstring(s);

return 0;
}

int lengthOfLongestSubstring(std::string s) {
std::string subset="";
    char frst_chr=s[0];
    int tot=0;
    int ans=0;
    for (int i=0;i=s.length()-1;i++)
    {
        int remaining=s.length()-i;
        for (int j=i+1;j=remaining;j++)
        {
            if (s[i]!=s[j])
            {
                ans=2;
            }    
        }
    }
    return ans;
}