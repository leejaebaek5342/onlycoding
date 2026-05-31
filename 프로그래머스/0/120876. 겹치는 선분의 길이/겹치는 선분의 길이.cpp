#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> check(201, 0);

    for (int i = 0; i < 3; i++) {
        int start = lines[i][0];
        int end = lines[i][1];

        for (int j = start; j < end; j++) {
            check[j + 100]++;
        }
    }

    for (int i = 0; i < check.size(); i++) {
        if (check[i] >= 2) {
            answer++;
        }
    }

    return answer;
}