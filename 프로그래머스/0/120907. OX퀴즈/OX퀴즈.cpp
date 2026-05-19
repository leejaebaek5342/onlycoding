#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int sum = 0;

    for(int i = 0; i < size(quiz); i++)
    {
        stringstream ss(quiz[i]);
        
        int sum = 0;
        int num = 0;
        string cmp = "";
        
        ss >> sum;
        while(ss >> cmp >> num)
        {
            if(cmp == "+")
            {
                sum += num;
            }
            else if(cmp == "-")
            {
                sum -= num;
            }
            else if(cmp == "=")
            {
                if(sum == num)
                {
                    answer.push_back("O");
                }
                else answer.push_back("X");
            }
        }
    }
    return answer;
}