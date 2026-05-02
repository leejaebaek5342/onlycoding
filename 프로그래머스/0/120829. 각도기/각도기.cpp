#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    
    if(angle == 180 || angle == 90)
    {
        if(angle == 180) return 4;
        else return 2;
    }
    else if(angle > 90) return 3;
    else return 1;
}