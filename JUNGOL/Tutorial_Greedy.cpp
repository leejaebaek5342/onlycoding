#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d, e, N;
    cin >> a >> b >> c >> d >> e >> N;

    int value[5] = {16, 8, 4, 2, 1};
    int have[5]  = {e, d, c, b, a};

    int count = 0;

    for (int i = 0; i < 5; i++) {
        int use = min(N / value[i], have[i]);

        count += use;
        N -= use * value[i];
    }

    if (N == 0)
        cout << count << '\n';
    else
        cout << "impossible\n";

    return 0;
}