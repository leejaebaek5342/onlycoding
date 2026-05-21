#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int minx = dots[0][0];
    int maxx = dots[0][0];
    int miny = dots[0][1];
    int maxy = dots[0][1];

    for (int i = 1; i < dots.size(); i++)
    {
        minx = min(minx, dots[i][0]);
        maxx = max(maxx, dots[i][0]);
        miny = min(miny, dots[i][1]);
        maxy = max(maxy, dots[i][1]);
    }

    return (maxx - minx) * (maxy - miny);
}