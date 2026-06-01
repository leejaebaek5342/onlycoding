#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int coupon = 0;
    int service = 0;
    while(chicken >= 10)
    {
        answer += chicken / 10;
        coupon += chicken % 10;
        chicken /= 10;
    }
    coupon += chicken;
    
    while(coupon >= 10)
    {
        answer += coupon / 10;
        service = coupon / 10;
        coupon %= 10;
        coupon += service;
    }
    
    return answer;
}