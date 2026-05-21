#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    array.push_back(height);
    sort(array.begin(),array.end());
    
    for(int i = 0; i < size(array); i++)
    {
        if(height < array[i])
        {
            answer++;
        }
    }
    return answer;
}