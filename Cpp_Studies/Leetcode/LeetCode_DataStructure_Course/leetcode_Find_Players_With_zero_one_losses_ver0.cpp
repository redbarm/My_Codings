#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution{
    public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches){
    unordered_map<int, int> winners, loosers;
    vector<vector<int>> store(2,vector<int>());
    vector<int> store_one_time_looser;
    vector<int> store_winners;


        int len=matches.size();
        for (int i=0;i<len;i++){
            winners[matches[i][0]]=matches[i][0];
            loosers[matches[i][1]]=matches[i][1];
            //winners[i]=matches[i][0];
            //loosers[i]=matches[i][1];
        }

        for (auto [key, val]: winners) {
            cout << "winner: "<<key << ": " << val << endl;
        }
        cout<<"size of winner: "<<winners.size()<<endl;
        cout<<"winners[0] :"<<winners[0]<<endl;

        for (auto [key, val]: loosers) {
            cout << "loosers: "<<key << ": " << val << endl;
        }
        cout<<"size of loosers: "<<loosers.size()<<endl;
        
        cout << (loosers.find(winners[4]) != loosers.end()) << endl;
        
        for (int i=0;i<winners.size();i++){
            if (loosers.find(winners[i]) != loosers.end()){
                store_one_time_looser.push_back(winners[i]);
                cout<<"lost exactly one match: "<<winners[i]<<endl;
            }else{
                //store[0].push_back(winners[i]);
                store_winners.push_back(winners[i]);
                cout<<"only winners "<<winners[i]<<endl;
            }
        }
        
        store[0].assign(store_winners.begin(),store_winners.end());
        store[1].assign(store_one_time_looser.begin(),store_one_time_looser.end());

        return store;
    }
};

int main(){
    vector<vector<int>> matches={{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    Solution solution;
    cout<<"solution :"<<solution.findWinners(matches)[1][1]<<endl;
    return 0;
}