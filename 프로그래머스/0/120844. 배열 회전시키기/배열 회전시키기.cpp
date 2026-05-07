#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    deque<int> dq;
    vector<int> answer;
    int front,back;
    for(int i=0;i<size(numbers);i++)
    {
        dq.push_back(numbers[i]);
    }
    
    if(direction == "right")
    {
        back = dq.back();
        dq.pop_back();
        dq.push_front(back);
    }
    else
    {
        front = dq.front();
        dq.pop_front();
        dq.push_back(front);
    }
    for(deque<int>::iterator it=dq.begin();it!=dq.end();it++)
    {
        answer.push_back(*it);
    }
    return answer;
}