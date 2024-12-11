#include <iostream>
#include <string>
/*
int reverse(int x) {
    char number[100];
    itoa(x,number,10);
    return number;
}
*/

int main()
{
    //int x=-123456789;
    int x=1534236469;
    char nbr_array[12];
    char rvs_array[12];
    //itoa(x,nbr_array,10);
    sprintf(nbr_array, "%d",x);
    std::cout<<nbr_array[0]<<std::endl;
    std::string number=nbr_array;
    std::cout<<sizeof(nbr_array)<<std::endl;
    std::cout<<number.length()<<std::endl;
    std::cout<<number<<std::endl;
    for (int i=0;i<number.length();i++)
    {
        rvs_array[i]=nbr_array[number.length()-i-1];    
    }
    std::cout<<rvs_array<<std::endl;
    //checking the array last index if it is negative sign
    //std::cout<<"rvs_array[0]: "<<rvs_array[0]<<std::endl;
    int sgn=1;    
    if (rvs_array[number.length()-1]=='-'){
        sgn=-1;
    }else{
        //do not do anything
    }
    std::cout<<"sgn: "<<sgn<<std::endl;
    int ans=atoi(rvs_array)*sgn;
    std::cout<<ans<<std::endl;
    return 0;
} 