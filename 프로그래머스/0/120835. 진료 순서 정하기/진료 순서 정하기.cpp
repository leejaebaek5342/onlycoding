#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

vector<int> solution(vector<int> emergency) {
    vector<pair<int,int>> count;
    vector<int> copy;
    vector<int> answer;
    
    answer.resize(size(emergency),0);
    count.resize(size(emergency));
    
    for(int i=0;i<size(emergency);i++)
    {
        copy.push_back(emergency[i]);
    }
    
    sort(copy.begin(),copy.end(),compare);
    
    for(int i=0;i<size(copy);i++)
    {
        count[i].first = copy[i];
        count[i].second = i;
    }
    
    for(int i=0;i<size(emergency);i++)
    {
        for(int j=0;j<size(emergency);j++)
        {
            if(emergency[i] == count[j].first)
            {
                answer[i] = count[j].second + 1;
            }
        }
    }
    return answer;
}