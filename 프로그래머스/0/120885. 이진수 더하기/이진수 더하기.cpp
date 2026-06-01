#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


string solution(string bin1, string bin2) {
    string answer = "";
    int n = max(size(bin1),size(bin2));
    vector<int> count(n+1 , 0);
    int index = 0;
    index = n;
    for(int i = bin1.size()-1; i >= 0 ; i--)
    {
        if(bin1[i] == '1')
        {
            count[index]++;
        }
        index--;
    }
    index = n;
    for(int i = bin2.size()-1; i >= 0; i--)
    {
        if(bin2[i] == '1')
        {
            count[index]++;
        }
        index--;
    }
    index = n;
    for(int i = count.size()-1; i > 0; i--)
    {
        if(count[i] >= 2 )
        {
            count[i-1]++;
            count[i] %= 2;
        }
    }
    for(int i = 0; i < count.size(); i++)
    {
        if(i == 0 && count[0] == 0) continue;
        answer.push_back((count[i]) + '0');
    }
    return answer;
}