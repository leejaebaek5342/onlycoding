#include <string>
#include <vector>

using namespace std;

bool isThree(int num)
{
    
    if(num % 3 == 0)
        return true;
    
    while(num > 0)
    {
        if(num % 10 == 3)
            return true;
        
        num /= 10;
    }
    
    return false;
}

int solution(int n) {
    int answer = 0;
    int count = 0;
    
    while(count < n)
    {
        answer++;
        
        if(!isThree(answer))
            count++;
    }
    
    return answer;
}