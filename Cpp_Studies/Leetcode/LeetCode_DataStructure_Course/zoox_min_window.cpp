#include <iostream>
#include <unordered_map>
#include <string>
#include <math.h>

using namespace std;
int findMinWinLen(string S, string T){
int left=0,str=0;
int tmp;
unordered_map<char,int> hmap;
for (int i=0;i<T.size();i++){
    hmap[T[i]]=0;
}

for (auto key:hmap){
    cout<<key.second<<endl;
}

for (int right=0;right<S.size();right++){
    if (hmap.find(S[right])!=hmap.end()){
        if (str==0){
            left=right;
            str++;
        }
        hmap[S[right]]++;
    }
    cout<<"right: "<<right<<endl;
    cout<<"left: "<<left<<endl;
    tmp=1;
    for (auto key:hmap){
        //cout<<"key: "<<key.second<<endl;
        tmp=tmp*(int)key.second;
        //cout<<"tmp: "<<tmp<<endl;
    }
    //cout<<"tmp: "<<tmp<<endl;
    //cout<<"pow: "<<pow(2,T.size())<<endl;
    if (tmp>0){
        return (right-left+1);
    }
}
return -1;
}

int main(){
    string S="abmeudfrazth";
    string T="murat";
    cout<<findMinWinLen(S,T)<<endl;
    return 0;
}