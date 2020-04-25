#include "Calc.h"

int add(string input){
    stringstream sm;
    char skip;
    int num;
    if(sm){
        sm.str(input);
        sm >> num;
    }else
    {
        num = 0;
    }
    return num;
}