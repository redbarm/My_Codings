#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, int> myHashMap;
    // myHashMap has integers for both keys and values
    
    myHashMap[4] = 83;
    myHashMap[5]++;// ++ means assign 5 to 1
    myHashMap[5]++;// ++ means assign 5 to 1
    myHashMap[5]++;// ++ means assign 5 to 1
    myHashMap[5]++;// ++ means assign 5 to 1
    myHashMap[6]++;
    myHashMap[7]++;
    myHashMap[10]=10;
    myHashMap[11]=10;
    myHashMap[12]=10;
    myHashMap[13]=10;
    cout<<"my hashmap size: "<<myHashMap.size();

    cout << myHashMap[4] << endl; // Prints 83
    
    // These two lines check if a key is in the map
    cout << (myHashMap.find(4) != myHashMap.end()) << endl; // Prints true (1)
    cout << (myHashMap.find(5) != myHashMap.end()) << endl; // Prints true (1)
    cout << (myHashMap.find(854) != myHashMap.end()) << endl; // Prints false (0)
    
    myHashMap[8] = 327;
    myHashMap[45] = 82523;
    
    for (auto [key, val]: myHashMap) {
        cout << key << ": " << val << endl;
    }
}