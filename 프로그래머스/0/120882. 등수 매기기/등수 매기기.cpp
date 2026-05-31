#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;

    for (int i = 0; i < score.size(); i++) {
        int rank = 1;
        int sum_i = score[i][0] + score[i][1];

        for (int j = 0; j < score.size(); j++) {
            int sum_j = score[j][0] + score[j][1];

            if (sum_j > sum_i) {
                rank++;
            }
        }

        answer.push_back(rank);
    }

    return answer;
}