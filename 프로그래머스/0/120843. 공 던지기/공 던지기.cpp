#include <string>
#include <vector>


using namespace std;

int solution(vector<int> numbers, int k) {
    int cnt = 0;
    
    cnt = ((k-1) * 2) % size(numbers);
    if(cnt < 0)
    {
        return numbers[abs(cnt)];
    }
    else return numbers[cnt];

}