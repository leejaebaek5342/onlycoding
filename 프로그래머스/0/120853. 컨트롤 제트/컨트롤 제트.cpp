#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    int cnt = 0;
    string code;
    
    while(ss >> code)
    {   
        
        if(code == "Z")
        {
            answer -= cnt;
        }
        else
        {
            cnt = stoi(code);
            answer += stoi(code);
        }
    }
    
    return answer;
}