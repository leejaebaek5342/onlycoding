#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer(2);
    int mx = 0;
    
    for(int i = 0; i < size(array); i++)
    {
        mx = max(mx, array[i]);
        if(mx == array[i])
        {
            answer[1] = i;
        }
    }
    answer[0] = mx;
    
    return answer;
}