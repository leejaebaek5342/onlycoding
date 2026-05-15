#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int mn = 101;
    
    sort(array.begin(),array.end());
    for(int i = 0; i < size(array); i++)
    {
        
        mn = min(mn, abs(n - array[i]));
    }
    for(int i = 0; i < size(array); i++)
    {
        if(abs(n- array[i]) == mn)
        {
            return array[i];
        }
    }
}