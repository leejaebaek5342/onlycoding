#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer(size(num_list) / n, vector<int>(n));
    int count = 0;
    int cnt = 0;
    for(int i=0;i<size(num_list);i++)
    {
        answer[count][cnt] = num_list[i];
        cnt++;
    
        if(cnt == n)
        {
            cnt = 0;
            count++;
        }
    }
    
    return answer;
}