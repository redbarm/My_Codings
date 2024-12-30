#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;
class Solution{
    public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches){
    unordered_set<int> noloose, oneloose, moreloose;
    vector<vector<int>> store(2,vector<int>());
        int len=matches.size();
        for (int i=0;i<len;i++){
            int winner=matches[i][0];
            int looser=matches[i][1];
            if ((oneloose.find(winner)==oneloose.end())&&(moreloose.find(winner)==moreloose.end())){
                noloose.insert(winner);
            }
            if (noloose.find(looser)!=noloose.end()){
                noloose.erase(looser);
                oneloose.insert(looser);
            }else if (oneloose.find(looser)!=oneloose.end()){
                oneloose.erase(looser);
                moreloose.insert(looser);
            }else if (moreloose.find(looser)!=moreloose.end()){
                continue;
            }else {
                oneloose.insert(looser);
            }
        }
        
        store[0].assign(noloose.begin(),noloose.end());
        store[1].assign(oneloose.begin(),oneloose.end());
        sort(store[0].begin(), store[0].end());
        sort(store[1].begin(), store[1].end());

        return store;
    }
};

int main(){
    vector<vector<int>> matches={{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    Solution solution;
    cout<<"solution :"<<solution.findWinners(matches)[1][1]<<endl;
    return 0;
}