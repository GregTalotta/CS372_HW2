#include "Calc.h"

int add(string input){
    stringstream sm;
    sm.str(parse(input));
    char skip;
    int num = 0;
    int waste = 0;
    vector<int> nums;
    if(!sm){
        return 0;
    }
    while(sm)
    {
        sm >> num;
        //sm >> waste;
        nums.push_back(num);
    }
    nums.pop_back();
    return std::accumulate(nums.begin(),nums.end(),0);
}

string parse(string input){
    for(int i = 0; i < input.size(); ++i){
        if(input[i] == ','){
            input[i] = ' ';
        }
    }
    return input;
}