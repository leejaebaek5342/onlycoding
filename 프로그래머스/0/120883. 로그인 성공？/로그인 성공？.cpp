#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    for (int i = 0; i < size(db); i++) {
        if (db[i][0] == id_pw[0]) {
            if (db[i][1] == id_pw[1]) {
                return "login";
            }
            return "wrong pw";
        }
    }

    return "fail";
}