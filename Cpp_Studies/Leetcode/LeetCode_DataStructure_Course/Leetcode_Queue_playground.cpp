#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <string>
#include <sstream>
#include <queue>

using namespace std;
int main() {
    queue<int> queue;
    
    queue.push(1);
    queue.push(2);
    queue.push(3);

    cout<<queue.front()<<endl;
    cout<<queue.back()<<endl;
    queue.pop();

    cout<<queue.front()<<endl;
    cout<<queue.back()<<endl;



    
    while (!queue.empty()) {
        cout << queue.front() << endl;
        queue.pop();
    }
    
    if (queue.empty()) {
        cout << "Queue is empty!" << endl;
    }
}

