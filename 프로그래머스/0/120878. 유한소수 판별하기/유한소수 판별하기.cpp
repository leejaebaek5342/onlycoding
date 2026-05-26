#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b){
    int c;
    while(b!=0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int solution(int a, int b) {
    b /= gcd(a,b);
    
    while(b % 2 == 0) b/=2;
    while(b % 5 == 0) b/=5;
    
    if(b == 1)
    {
        return 1;
    }
    return 2;
}