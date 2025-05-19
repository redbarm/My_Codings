#include <iostream>
#include <vector>

using namespace std;
int main(){
    //Two pointer approach
    vector<int> nums={1,2,3,4,5};
    int target=8;
    int right=nums.size()-1;
    int left=0;
    int total=0;
    while(left<right){
        total=nums[right]+nums[left];
        cout<<"total: "<<total<<endl;
        if (total==target){cout<<"Total: "<<total<<endl;cout<<"right:"<<right<<endl;cout<<"left:"<<left<<endl;return 0;}
        else if(total<target){left++;}
        else {right--;}
    }
    return 0;
}