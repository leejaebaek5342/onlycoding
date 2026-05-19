#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    answer = sqrt(n);
    if((answer * answer) == n)
    {
        return 1;
    }
    else return 2;

}