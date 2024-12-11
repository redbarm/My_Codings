//From GeeksforGeeks.org
#include <iostream>
#include <vector>

using namespace std;

void DFSRec(vector<vector<int>> &adj, vector<bool> &visited, int s){
    //Mark the current vertex as visited
    visited[s]=true;

    //print current vertex
    cout<< s << " ";

    //Redursively visit all adjacent vertices
    //That are not visited yet
    //printf("adj[s] %d \n",adj[s][1]);
    for (int i:adj[s])
        if (visited[i]==false)
            DFSRec(adj,visited,i);
            
}


//MAin DFS function that initialize the visited array
//and call DFSRec
void DFS(vector<vector<int>> &adj, int s){
    vector<bool> visited(adj.size(),false);
    DFSRec(adj,visited,s);
}

//To add an edge in an undirected graph
void addEdge(vector<vector<int>> &adj, int s , int t){
    //cout<<"t: "<<t<<endl;
    adj[s].push_back(t);
    //cout<<"s: "<<t<<endl;
    adj[t].push_back(s);
}

int main(){
    int V=5;//number of vertices
    vector<vector<int>> adj(V);

    //add edges
    vector<vector<int>> edges={{1,2},{1,0},{2,0},{2,3},{2,4}};
    //vector<vector<int>> edges={{0,1},{0,2},{0,3},{2,3},{2,4}};
    for (auto &e :edges)
        addEdge(adj,e[0],e[1]);
    
    int s=1; //starting vertex
    cout<<"DFS from source: "<<s<<endl;
    DFS(adj,s);
}