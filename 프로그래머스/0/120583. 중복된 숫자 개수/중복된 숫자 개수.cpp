#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int count = 0;
    
    sort(array.begin(),array.end());
    
    auto index = find(array.begin(),array.end(),n);
    
    if(index == array.end()) return 0;
    
    while(index != array.end() && *index == n)
    {
        count++;
        index++;
    }
    return count;
}