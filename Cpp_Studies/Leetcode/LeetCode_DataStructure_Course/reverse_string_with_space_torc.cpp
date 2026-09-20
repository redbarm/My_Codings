#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution{
    public:
    string reverseString(string s){
        int lastSpaceIndx=0;
        int spaceIndx;
        int indx=0;
        string result;
        while(indx<s.size()){
            if ((s[indx]==' ')&&(indx==0)){
                spaceIndx=indx;
                result+=' ';
                lastSpaceIndx=spaceIndx;
            }
            if ((s[indx]==' ')&&(indx!=0)){
                spaceIndx=indx;
                //cout<<"2"<<endl;
                //cout<<spaceIndx<<" "<<lastSpaceIndx<<endl;
                for (int i=spaceIndx-1;i>=lastSpaceIndx;i--){
                    //cout<<i;
                    result+=s[i];
                }
                result+=' ';
                lastSpaceIndx=spaceIndx;
            }
            indx++;
        }
        
        return result;
    }
};

int main(){
    Solution sol;
    string s="test test solved ";
    cout<<sol.reverseString(s);
    return 0;
}