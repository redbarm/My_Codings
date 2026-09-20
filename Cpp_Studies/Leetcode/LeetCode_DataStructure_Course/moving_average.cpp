#include <iostream>
#include <vector>

using namespace std;

class Calc{
public:
vector<float> avgVec;
int winSize;
int len;
float avg=0;
float total=0;

vector<float> calcMovAvg(vector<float> &data, int winSize){
    len=size(data);
    for (int i=0;i<len;i++){
        if (i<=winSize){
            total=total+data[i];
            avg=total/(i+1);
            avgVec.push_back(avg);
        }else{
            total=total+data[i];
            total=total-data[i-winSize];
            avg=total/winSize;
            avgVec.push_back(avg);
        }
    }   
    return  avgVec;
}
};

int main(){
    Calc Calc;
    vector<float> data={10,20,30,40,50,60,70,80,90};
    Calc.winSize=3;
    Calc.calcMovAvg(data,Calc.winSize);
    cout<<Calc.avgVec[3]<<endl;

}




