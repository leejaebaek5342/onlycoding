#include <string>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";

    sort(s.begin(), s.end());

    for (int i = 0; i < size(s); i++) 
    {
        if ((i == 0 || s[i] != s[i - 1]) &&
            (i == size(s) - 1 || s[i] != s[i + 1]))         {
            answer.push_back(s[i]);
        }
    }

    return answer;
}