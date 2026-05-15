#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string str = "";
    
    str = to_string(order);
    for(int i = 0; i < size(str); i++)
    {
        if(str[i] == '3' || str[i] == '6' || str[i] == '9' )
        {
            answer++;
        }
    }
    return answer;
}