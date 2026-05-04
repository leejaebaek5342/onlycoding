#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int result = 0;
    
    answer = hp / 5;
    result = hp % 5;
    
    if(result == 0)
    {
        return answer;
    }
    else
    {
        answer += result / 3;
        result = result % 3;
        
        if(result == 0)
        {
            return answer;
        }
        else
        {
            return answer + result;
        }
    }
   
}