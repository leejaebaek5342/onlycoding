#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    string str = "";
    string res = "";
    
    for(string s : spell)
    {
        str += s;
    }
    sort(str.begin(),str.end());
    
    for(string s: dic)
    {
        res = "";
        res += s;
        sort(res.begin(),res.end());
        
        if(str == res)
        {
            return 1;
        }
    }
    return 2;
}