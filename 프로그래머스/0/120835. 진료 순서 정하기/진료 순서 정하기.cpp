#include <string>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> solution(vector<int> emergency) {
    vector<int> copy;
    vector<int> answer;
    
    answer.resize(size(emergency),0);
    
    for(int i=0;i<size(emergency);i++)
    {
        copy.push_back(emergency[i]);
    }
    
    sort(copy.rbegin(),copy.rend());
    
    
    for(int i=0;i<size(emergency);i++)
    {
        for(int j=0;j<size(emergency);j++)
        {
            if(emergency[i] == copy[j])
            {
                answer[i] = j + 1;
                break;
            }
        }
    }
    return answer;
}