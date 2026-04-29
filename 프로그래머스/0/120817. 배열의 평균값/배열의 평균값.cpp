#include <string>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

double solution(vector<int> numbers) {
    double sum = accumulate(numbers.begin(),numbers.end(),0);
    
    return sum/size(numbers);
    
}