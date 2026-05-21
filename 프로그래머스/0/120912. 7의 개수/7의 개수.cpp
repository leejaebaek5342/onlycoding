#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    string str = "";
    for(int i = 0; i < size(array); i++)
    {
        str += to_string(array[i]);
    }
    
    for(int i = 0; i < size(str); i++)
    {
        if(str[i] == '7')
        {
            answer++;
        }
    }
    return answer;
}