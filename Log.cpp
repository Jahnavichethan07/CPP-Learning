#include <iostream>
#include "Log.hpp"
void MultiplyAndLog(int a,int b){
    int result=a*b;
    std::cout<<result<<std::endl;
}
int Initial(){
    MultiplyAndLog(5,6);
    return 0;
}