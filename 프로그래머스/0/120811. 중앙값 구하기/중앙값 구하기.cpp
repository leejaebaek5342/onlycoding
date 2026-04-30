#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(),array.end());
    int cnt = size(array) / 2;
    int answer = array[cnt];
    return answer;
}