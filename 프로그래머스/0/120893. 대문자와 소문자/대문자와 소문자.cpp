#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i = 0; i < size(my_string); i++)
    {
        cout << (int) my_string[i];
        if(my_string[i] <= 90)
        {
            answer.push_back(my_string[i] + 32);
        }
        else
        {
            answer.push_back(my_string[i] - 32);
        }
    }
    return answer;
}