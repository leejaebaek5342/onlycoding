#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";

    vector<pair<string, char>> morse = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'},
        {".", 'e'}, {"..-.", 'f'}, {"--.", 'g'}, {"....", 'h'},
        {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
        {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'},
        {"--.-", 'q'}, {".-.", 'r'}, {"...", 's'}, {"-", 't'},
        {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
        {"-.--", 'y'}, {"--..", 'z'}
    };

    stringstream ss(letter);
    string code;

    while (ss >> code) 
    {
        for (int i=0;i<morse.size();i++) 
        {
            if (code == morse[i].first) 
            {
                answer += morse[i].second;
                break;
            }
        }
    }

    return answer;
}