#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    float twenty = 0.8,ten = 0.9 , five = 0.95;

    if(price >= 500000)
    {
        return price * twenty;
    }
    else if(price >= 300000)
    {
        return price * ten;
    }
    else if(price >= 100000)
    {
        return price * five;
    }
    else return price;
}