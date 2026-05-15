#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
    for(int i = code - 1; i < size(cipher); i += code)
    {
        answer.push_back(cipher[i]);
    }
    
    return answer;
}