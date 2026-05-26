#include <string>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    string str = "";

    for (int i = 0; i < size(my_string); i++) 
    {
        if (my_string[i] <= '9') 
        {
            str.push_back(my_string[i]);
        }
        
        else 
        {
            if (!str.empty()) 
            {
                answer += stoi(str);
                str = "";
            }
        }
    }

    if (!str.empty()) 
    {
        answer += stoi(str);
    }

    return answer;
}