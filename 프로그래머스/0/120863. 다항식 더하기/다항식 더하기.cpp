#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    stringstream ss(polynomial);
    string term;
    
    int x_sum = 0;
    int num_sum = 0;
    
    while (ss >> term) 
    {
        if (term == "+") continue;
        
        if (term.back() == 'x') 
        {
            if (term == "x") 
            {
                x_sum += 1;
            } 
            else 
            {
                x_sum += stoi(term.substr(0, term.size() - 1));
            }
        } 
        else 
        {
            num_sum += stoi(term);
        }
    }
    
    string answer = "";
    
    if (x_sum > 0) 
    {
        if (x_sum == 1) answer += "x";
        else answer += to_string(x_sum) + "x";
    }
    
    if (num_sum > 0) 
    {
        if (!answer.empty()) answer += " + ";
        answer += to_string(num_sum);
    }
    
    return answer;
}