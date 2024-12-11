#include <iostream>
#include <vector>
#include <stack>

using namespace std;


void DFS_Iterative(vector<vector<int>> &graph, int v){ //graph is the tree, v is vertices
//create visted vector and initialized as false or "not visited"!
vector<bool> visited(graph.size(), false);
//create stack vector
stack<int> st;

st.push(v);
while (!st.empty()){
    int node=st.top();
    st.pop();

    if (!visited[node]){
        visited[node]=true;
        cout<<node<<" ";

        //push all unvisited neighbors of the current node onto the stack
        for (int neighbor:graph[node]){
            if (!visited[neighbor]){
                st.push(neighbor);
            }
        }
    }
}    

}

int main(){
    //vector<vector<int>> graph={{1, 2},{0, 3, 4},{0, 5},{1},{1},{2}}; 
    vector<vector<int>> graph;
    graph.resize(5);
    //graph[0]={1,2};
    //graph[1]={0,3,4};
    //graph[2]={0};
    //graph[3]={1};
    //graph[4]={1};
    vector<vector<int>> edges={{1,2},{1,0},{2,0},{2,3},{2,4}};
    //then graph should be
    graph={{1,2},{2,0},{0,1,3,4},{2},{2}};
    int start_v=0;//starting vertice
    DFS_Iterative(graph,start_v);
}

