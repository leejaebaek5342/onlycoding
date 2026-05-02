#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(auto c : my_string)
    {
        if(c == letter[0]) continue;
        answer.push_back(c);
    }
    return answer;
}