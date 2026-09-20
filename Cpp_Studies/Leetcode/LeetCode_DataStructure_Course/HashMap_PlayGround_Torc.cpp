#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<int,float> hmap;
    hmap[0]=84;
    cout<<hmap[0]<<endl;
    hmap[0]++;
    cout<<hmap[0]<<endl;
    hmap[1];
    cout<<hmap[1]<<endl;
    hmap[1]++;
    cout<<hmap[1]<<endl;  
}