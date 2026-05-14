#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int i;
    for(i = 1; answer*i <= n; i++)
    {
        answer *= i;
    }
    return i - 1;
}