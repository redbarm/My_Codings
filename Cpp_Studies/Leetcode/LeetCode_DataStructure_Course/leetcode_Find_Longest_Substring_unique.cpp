#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int findLongestSubstring(string s, int k){
    unordered_map<char,int> counts;
    int left=0, ans=0;
    int len = s.size();
    for (int right=0;right<len;right++){
        counts[s[right]]++;
        while (counts.size()>k){
            counts[s[left]]--;
            if (counts[s[left]]==0){
                counts.erase(s[left]);
            }
            left++;
        }
        ans=max(ans,right-left+1);
    }
    return ans;
    //std::cout<<counts[s[11]]<<std::endl;
    //std::cout<<counts.size()<<std::endl;
}

int main(){
    //string s={'a','a','a','a','a','a','b','b','c','c','c','d','d','d','d','d'};
    string s="eceba";
    int k=2;
    std::cout<<"ans: "<<findLongestSubstring(s,k)<<std::endl;

    std::unordered_map<std::string, int> myMap = {
        {"apple", 1},
        {"banana", 2},
        {"orange", 3},
        {"orange", 4},
        {"mandalin",4}
    };

    std::cout << "Size of the map: " << myMap.size() << std::endl;

    return 0;
}