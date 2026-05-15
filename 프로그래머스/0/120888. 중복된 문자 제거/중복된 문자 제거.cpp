#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {

    for(int i = 0; i < size(my_string); i++)
    {
        for(int j = i + 1; j < size(my_string); j++)
        {
            if(my_string[i] == my_string[j])
            {
                my_string.erase(my_string.begin() + j);
                j--;
            }
        }
    }

    return my_string;
}