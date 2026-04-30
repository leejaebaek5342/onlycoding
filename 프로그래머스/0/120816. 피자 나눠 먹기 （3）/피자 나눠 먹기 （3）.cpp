#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int slice, int n) {
    
    for(int i=1;i<=50;i++)
    {
        if((slice*i) / n==0) continue;
        return i;
    }
}