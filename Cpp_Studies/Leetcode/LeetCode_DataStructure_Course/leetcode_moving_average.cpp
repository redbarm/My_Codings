#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string>

using namespace std;
class MovingAverage{
    public:
    queue<int> myQueue;
    vector<int> myVector;
    int size;
    double total=0;

    double calculateMovingAverage(vector<string> &call, vector<int> &values){
        size=values[0];
        int counter=1;
        for (string str:call){
            if (str=="next"){
                this->next(values[counter]);
                counter++;
            }
        }
    }
 
    double next(int val){
        //double avg_vector=0;
        //double total_vector=0;
        //int myVector_size=myVector.size();
        //myVector.push_back(val);
        double avg=0;
        
        myQueue.push(val);
         
        //vector won't work here because we can not delete the first element in vectors!!

        //for (int i=0;i<myVector_size;i++){
        //    total_vector+=myVector[i];
        //}
        //avg_vector=total_vector/myVector_size;

        total+=val;
        
        if (myQueue.size()>size){
            total-=myQueue.front();
            myQueue.pop();
        }

        avg=total/myQueue.size();
        cout<<avg<<endl;
        //cout<<total<<endl;
        //cout<<myQueue.size()<<endl;

        
        //while (!myQueue.empty()){
        //    total+=myQueue.front();
        //    cout<<total<<endl;
        //    myQueue.pop();
        //}
    
        return avg;
    }

}; 

int main(){
    vector<string> call;
    vector<int> values;
    call={"MovingAverage", "next", "next", "next", "next"};
    values={3,1,10,3,5};
    MovingAverage movingaverage;
    movingaverage.calculateMovingAverage(call,values);
    return 0;
}