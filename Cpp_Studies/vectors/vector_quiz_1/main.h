// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

 void printVector(vector<float> vIn)
 {//printing the contents of vIns
    //TODO: Complete the function 
    std::cout<<"In Function"<<'\n';
    vector<float>::iterator it;
    for (it = vIn.begin(); it != vIn.end(); ++it)
        cout<<*it<<" ";
 }
 