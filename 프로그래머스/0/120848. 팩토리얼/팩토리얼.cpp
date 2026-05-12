#include <string>
#include <vector>

using namespace std;
int factorial(int num)
{
    if(num == 0 || num == 1) return 1;
    return num * factorial(num-1);
}

int solution(int n) {
    int cnt = 1;
    int result = 0;
    while(1)
    {
            result = factorial(cnt);
            if(n >= result)
            {
                cnt++;
            }
            else return cnt - 1;
    }
}