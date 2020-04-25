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
        if(num < 0)
        {
            throw "negatives not allowed";
            throw num;
        }
        nums.push_back(num);
    }
    nums.pop_back();
    return std::accumulate(nums.begin(),nums.end(),0);
}

string parse(string input){
    string output = "";
    char delim = ',';
    if(input.substr(0,2) == "//"){
        delim = input[2];
        input = input.substr(4, input.size()-3);
    }
    for(int i = 0; i < input.size(); ++i)
    {
        if(input[i] == delim)
        {
            output.push_back(' ');
        }
        else if((input[i] == '\\') && (input[i+1] == 'n'))
        {
            output.push_back(' ');
        }else
        {
            output.push_back(input[i]);
        }
    }
    return output;
}