#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, int k) {
    string str = "";
    
    str = to_string(num);
    
    for(int i = 0; i < size(str); i++)
    {
        if(str[i] == k + '0')
        {
            return i + 1;
        }
    }
    return -1;
}