#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    pair<int,int> count = {0,0};
    
    for(int n : num_list)
    {
        if(n % 2 == 0) count.first++;
        else count.second++;
    }
    answer.push_back(count.first);
    answer.push_back(count.second);
    return answer;
}