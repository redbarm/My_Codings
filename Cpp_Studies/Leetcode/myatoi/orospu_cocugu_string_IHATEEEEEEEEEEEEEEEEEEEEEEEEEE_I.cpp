#include <iostream>
#include <string>

int main(){
    std::string orospu;
    std::string test=("AMINA AVRDINI SIKEYIM SENIN STRING SENDEN HIKCBIRSEYDEN NEFRET ETMEDIGIM KADAR  NEFGRET EDIYORUM  ");
    char AlwaysuseChar[]="hello";
    orospu[0]='2';
    orospu[1]='2';
    orospu[2]='2';
    orospu[3]='2';
    orospu[4]='2';
    orospu[5]='2';
    orospu[6]='2';
    orospu[7]='\0';
    std::cout<<" %s"<<orospu<<std::endl; // IT DOES NOT% WORK!
    std::cout<<test<<std::endl;
    std::cout<<AlwaysuseChar<<std::endl;
    std::cout<<orospu.length()<<std::endl;
    int yarrak=stoi(orospu);
    std::cout<<yarrak;
    return 0;
} 