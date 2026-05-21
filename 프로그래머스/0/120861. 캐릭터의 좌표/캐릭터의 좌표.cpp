#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2,0);
    int x = board[0] / 2, y = board[1] / 2;
    
    map<string,int> count= {
        {"right", 1},
        {"left", -1},
        {"up", 1},
        {"down",-1}
    };
    for(int i = 0; i < size(keyinput); i++)
    {
        if(keyinput[i] == "right" || keyinput[i] == "left")
        {
            if(abs(answer[0] + count[keyinput[i]]) <= x)
            {
                answer[0] += count[keyinput[i]];
            }
        }
        else
        {
            if(abs(answer[1] + count[keyinput[i]]) <= y)
            {
                answer[1] += count[keyinput[i]];
            }
        }
    }
    return answer;
}