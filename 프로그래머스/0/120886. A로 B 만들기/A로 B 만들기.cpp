#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    map<char,int> before_m;
    map<char,int> after_m;
    
    for(int i = 0; i < before.size(); i++)
    {
        before_m[before[i]]++;
    }
    for(int i = 0; i < after.size(); i++)
    {
        after_m[after[i]]++;
    }
    
    for(int i = 0; i < after.size(); i++)
    {
        if(before_m[after[i]] == after_m[after[i]])
        {
            answer++;
        }
    }
    if(answer == after.size())    return 1;
    return 0;
}