#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int sum = 0;
    char save = '+';
    string tmp = "";

    stringstream ss(my_string);
  
    while(ss >> tmp)
    {
        if(tmp == "+" || tmp == "-")
        {
            save = tmp[0];
        }
        else
        {
            if(save == '+')
            {
                sum += stoi(tmp);
            }
            else
            {
                sum -= stoi(tmp);
            }
        }
    } 
    return sum;
}