#include <iostream>
#include <vector>
#include <string>

using namespace std;

void fn(int i){
    if (i>10) {return;}
    cout<<i<<endl;
    //if (i>10) {return;} it prints 11. extra!!
    fn(i+1);
    cout<<"end of call where i: "<<i<<endl;
    return;
}

int main(){
    int i=0;
    fn(i);
    return 0;
}