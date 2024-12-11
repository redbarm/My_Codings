#include <iostream>
#include <string>

std::string convert(std::string s, int numRows);

int main(){
std::string s="AB";
std::cout<<convert(s,3);
return 0;
}

std::string convert(std::string s, int numRows) {
char arr[10][10]={};
int lngt=s.length();
std::cout<<lngt<<std::endl;
int tot=0;
int row=0;
int column=0;
std::string output="";
while (tot<lngt){
    while (row<numRows){
        arr[row][column]=s[tot];
        row++;
        tot++;
        if (tot==lngt){
            break;
        } 
        }
        if (tot==lngt){ 
            break;
        }else{
            //row--;
            row=row-2;
            column++;
            while (row>0){ 
                arr[row][column]=s[tot];
                row--;
                tot++;
                column++; 
                if (tot==lngt){
                    break; 
                }
        } 
        } 
} 
    std::cout<<row<<std::endl;
    std::cout<<column<<std::endl;
    std::cout<<tot<<std::endl;
    std::cout<<arr[1][0]<<std::endl;


    for (int i=0;i<numRows;i++){
        for (int j=0;j<column+1;j++){  
        std::cout<<arr[i][j]<<std::endl; 
        if (arr[i][j]!=NULL){
            output.push_back(arr[i][j]);
        }
    }
    }
    return output;
}