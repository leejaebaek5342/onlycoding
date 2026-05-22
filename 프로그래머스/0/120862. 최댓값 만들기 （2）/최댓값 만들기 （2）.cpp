#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());

    int n = size(numbers);

    int a = numbers[0] * numbers[1];           
    int b = numbers[n - 1] * numbers[n - 2];   

    return max(a, b);
}