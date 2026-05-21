#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int x,y;
    cout << size(dots);
    for(int i =1; i < size(dots); i++)
    {
        if(dots[0][0] != dots[i][0])
        {
            x = dots[i][0];
        }
        if(dots[0][1] != dots[i][1])
        {
            y = dots[i][1];
        }
    }
    x -= dots[0][0];
    y -= dots[0][1];
    answer = x * y;
    return abs(answer);
}