#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <string>
#include <sstream>
#include <queue>

using namespace std;
class Solution{
public:
    queue<int> myQueue;
    //Passing as sized array
    int addQueue_bySizedArray(int arr[], int size){
    for (int i=0;i<size;i++){
        myQueue.push(arr[i]);
    }
    cout<<myQueue.front()<<endl;
    cout<<myQueue.back()<<endl;
    return 0;
    }
    //Passing as Pointer
    int addQueue_byPointer(int *arr, int size){
    for (int i=0;i<5;i++){
        myQueue.push(arr[i]);
    }
    //or
    //while (arr!=NULL){
    //    myQueue.push(*arr);
    //    arr++;
    //}
    cout<<myQueue.front()<<endl;
    cout<<myQueue.back()<<endl;
    return 0;
    }

};

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution solution;
    solution.addQueue_bySizedArray(arr,size);
    solution.addQueue_byPointer(arr,size);


    return 0;
}