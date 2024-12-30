#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <string>
#include <sstream>
#include <queue>

using namespace std;
bool isUniqueChar(string s){
    unordered_map<char,int> hMap;
    int len=s.size();
    for (int i=0;i<len;i++){
        if (hMap.find(s[i]) != hMap.end()){
            cout<<s[i]<<endl;
            cout<<"hmap de var"<<endl;
            return false;
        }else{
            hMap[s[i]]++;
        }
    }
    return true;
}

bool isPermutation(string s1,string s2){
    unordered_map<char,int> hMap;
    int len1=s1.size();
    int len2=s2.size();
    for (int i=0;i<len1;i++){
        hMap[s1[i]]++;
    }

    for (int i=0;i<len2;i++){
    if (hMap.find(s2[i]) != hMap.end()){       
        
    }   
    }
}


int main(){
    string s="muratm";
    string s1="abcde";
    string s2="de";
    cout<<isUniqueChar(s)<<endl;
    cout<<isPermutation(s1,s2)<<endl;
}