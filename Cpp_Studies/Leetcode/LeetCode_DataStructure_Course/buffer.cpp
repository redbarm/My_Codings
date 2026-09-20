#include <iostream>
#include <vector>

using namespace std;

class bufferDesign{
    public:
    int buffersize;
    vector<float> buffer;

    vector<float> findBuffer(vector<float> data){
        for (int i=0;i<data.size();i++){
            if (i<=3){
                buffer.push_back(data[i]);
            }else{
                buffer.push_back(data[i]);
                buffer.erase(buffer.begin());
            }
        }
        return buffer;

    }

};

int main(){
bufferDesign CalcBuffer;
vector<float> data={10,20,30,40,50,60,70,80,90,100};
int len =data.size();
vector<float> buffer;
CalcBuffer.buffersize=2;
CalcBuffer.findBuffer(data);
cout<<CalcBuffer.buffer[2]<<endl;

return 0;

}

