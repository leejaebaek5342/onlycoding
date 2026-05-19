#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
   
    
    for(int i = 0; i < size(my_string); i++)
    {
        if(my_string[i] < 'a')
        {
            my_string[i] += 32;
        }
    }
    sort(my_string.begin(),my_string.end());
    return my_string;
}