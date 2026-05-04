#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int age) {
    string answer = "";
    answer = to_string(age);
    string result = "";
    
    for(int i=0;i<size(answer);i++)
    {
        int count = answer[i] - '0';
        result.push_back(char(count+97));
    }
    return result;
}