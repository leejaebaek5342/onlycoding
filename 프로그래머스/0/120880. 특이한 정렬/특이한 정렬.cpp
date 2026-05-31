#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<pair<int, int>> p;

    for (int i = 0; i < size(numlist); i++) 
    {
        int dist = abs(numlist[i] - n);
        p.push_back({dist, numlist[i]});
    }

    sort(p.begin(), p.end(), [](pair<int, int> a, pair<int, int> b) 
    {
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });

    for (int i = 0; i < size(p); i++) {
        answer.push_back(p[i].second);
    }

    return answer;
}