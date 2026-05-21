#include <string>
#include <vector>
#include <iostream>


using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int cnt = 0;
    
    while(cnt < size(my_str))
    {
        answer.push_back(my_str.substr(cnt,n));
        cnt += n;
        
    }
    return answer;
}