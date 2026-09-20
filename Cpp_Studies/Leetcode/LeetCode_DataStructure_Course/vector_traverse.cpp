#include <iostream>
#include <vector>

using namespace std;

int main(){
vector<float> data={10,20,30,40,50,60,70,80,90};
vector<float> buffer;


for (auto& val:data){
    cout<<"data"<<val<<endl;
}


for (int i=0;i<data.size();i++){
    if (i<=3){
        buffer.push_back(data[i]);
    }else{
        buffer.push_back(data[i]);
        buffer.erase(buffer.begin());
    }
}

for (auto& val:buffer){
    cout<<"buffer"<<val<<endl;
}


return 0;

}





