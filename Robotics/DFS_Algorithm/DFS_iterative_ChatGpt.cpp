#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void DFS(vector<vector<int>>& graph, int startNode) {
    vector<bool> visited(graph.size(), false);
    stack<int> st;

    st.push(startNode);

    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!visited[node]) {
            visited[node] = true;
            cout << node << " ";

            // Push all unvisited neighbors of the current node onto the stack
            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    st.push(neighbor);
                }
            }
        }
    }
}

int main() {
    //vector<vector<int>> graph = {
    //    {1, 2},
    //    {0, 3, 4},
    //    {0, 5},
    //    {1},
    //    {1},
    //    {2}
    //};

    vector<vector<int>> graph={{1,0},{0,2},{2,1},{0,3},{1,4}};

    int startNode = 0;

    cout << "DFS traversal starting from node " << startNode << ": ";
    DFS(graph, startNode);
    cout << endl;

    return 0;
}