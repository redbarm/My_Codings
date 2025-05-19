#include <iostream>
#include <vector>

using namespace std;
class Solution{
    public:
    int numIslands(vector<vector<char>> &world){
        int numRow=world.size();//cout<<numRow<<endl;
        int numColumn=world[0].size();//cout<<numColumn<<endl;
        vector<char> rowLimVector;
        
        for (int i=0;i<numRow;i++){
            world[i].push_back('0');
        }
        
        for (int i=0;i<numColumn;i++){
            rowLimVector.push_back('0');
        }
        world.push_back(rowLimVector);

        int numIsland=0;
        for (int row=0;row<numRow;row++){
            for (int column=0;column<numColumn;column++){
                if (world[row][column]=='1'){
                    numIsland+=1;world[row][column]='2';
                    cout<<"yeni ada"<<numIsland<<endl;
                    //if (column==numColumn-1){
                    //    break;
                    //}          
                    if (world[row][column+1]=='1'){
                        world[row][column+1]='2';
                    }
                    //if (row==numRow-1){
                    //    break;
                    //} 
                    if (world[row+1][column]=='1'){
                        world[row+1][column]='2';
                    }
                }else if (world[row][column]=='2'){
                    //if (column==numColumn-1){
                    //    break;
                    //} 
                    if (world[row][column+1]=='1'){
                        world[row][column+1]='2';
                    }
                    //if (row==numRow-1){
                    //    break;
                    //} 
                    if (world[row+1][column]=='1'){
                        world[row+1][column]='2';
                    }
                }else {}//DO NOTHING
            }
        }

        return numIsland;
    }
};

int main(){
    Solution sol;
    //vector<vector<int>> world={{1,1,1,0,0},{1,1,0,1,0},{1,1,0,0,0},{0,0,0,0,0}};
    vector<vector<char>> world={{'1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1'}};
    //vector<vector<char>> world={{'1'},{'1'}};
    cout<<"num. of island: "<<sol.numIslands(world)<<endl;
}

