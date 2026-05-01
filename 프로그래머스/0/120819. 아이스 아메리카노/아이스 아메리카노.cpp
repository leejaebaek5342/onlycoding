#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int americano = 5500;
    int count = 0;
    
    while(money>=5500)
    {
        money-=americano;
        count++;
    }
    answer.push_back(count);
    answer.push_back(money);
    return answer;
}