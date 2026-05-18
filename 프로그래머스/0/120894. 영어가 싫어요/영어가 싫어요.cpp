#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    vector<string> word = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    string result = "";

    for (int i = 0; i < numbers.size(); ) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if (numbers.substr(i, word[j].size()) == word[j]) 
            {
                result += to_string(j);
                i += word[j].size();
                break;
            }
        }
    }

    return stoll(result);
}