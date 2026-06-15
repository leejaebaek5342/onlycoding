#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, S;
    cin >> N >> S;

    long long totalprice = 0;
    long long min_price = 0;

    for (int i = 0; i < N; i++) {
        long long C, Y;
        cin >> C >> Y;

        if (i == 0) {
            min_price = C;
        } else {
            min_price = min(C, min_price + S);
        }

        totalprice += min_price * Y;
    }

    cout << totalprice << '\n';

    return 0;
}