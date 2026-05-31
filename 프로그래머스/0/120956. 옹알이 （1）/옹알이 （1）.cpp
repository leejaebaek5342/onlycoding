#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    for (string s : babbling) {
        while (s.find("aya") != string::npos)
            s.replace(s.find("aya"), 3, " ");

        while (s.find("ye") != string::npos)
            s.replace(s.find("ye"), 2, " ");

        while (s.find("woo") != string::npos)
            s.replace(s.find("woo"), 3, " ");

        while (s.find("ma") != string::npos)
            s.replace(s.find("ma"), 2, " ");

        bool ok = true;

        for (char c : s) {
            if (c != ' ') {
                ok = false;
                break;
            }
        }

        if (ok) answer++;
    }

    return answer;
}