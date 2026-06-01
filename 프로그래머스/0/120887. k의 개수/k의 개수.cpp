#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    int index = 0;
    for(int r = i; r <= j; r++)
    {
        string str = "";
        str = to_string(r);
        sort(str.begin(),str.end());
        if((index = str.find(to_string(k))) != string::npos)
        {
            while(str[index] == k + '0')
            {
                answer++;
                index++;
            }
        }
    }
    return answer;
}