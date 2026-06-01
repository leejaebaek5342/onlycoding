#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int r = i; r <= j; r++)
    {
        string str = "";
        str = to_string(r);
        for(int z = 0; z < str.size(); z++)
        {
            if(str[z] == k + '0')
            {
                answer++;
            }
        }
    }
    return answer;
}