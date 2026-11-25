#include<iostream>
#include "Log.hpp"

int main()
{
    //Variables and Data types
    int apples=5;
    char alphabet='A';
    bool ans=true;
    float no=1.345;
    double no2=348.293938;
    cout<<sizeof(apples)<<endl<<sizeof(alphabet)<<endl<<sizeof(ans)<<endl<<sizeof(no)<<endl<<sizeof(no2)<<endl;

    //Functions and headers
    MultiplyAndLog(3,2);
    MultiplyAndLog(4,5);
    MultiplyAndLog(6,7);
    Initial();
    std::cout<<"hello world"<<std::endl;
    std::cout<<MultiplyAndLog(9,9);
    std::cin.get();
}


