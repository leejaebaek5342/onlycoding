#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N,S;
    long long totalprice = 0;
    int cnt1 = 0;
    int cnt2 = 1;
    cin >> N >> S;
    vector<int>C(N,0),Y(N,0);
    int lprice = 0;

    for(int i = 0; i < N; i++)
    {
        cin >> C[i] >> Y[i];
    }
    totalprice += C[0] * Y[0];

    for(int i = 1; i < N; i++)
    {
        lprice = min(C[cnt1] + (5 * cnt2), C[i]);
        // cout << "count = " << lprice << '\n';
        if(lprice == C[i])
        {
            totalprice += lprice * Y[i];
            // cout << totalprice << '\n';
            cnt1++;
            cnt2 = 1;
        }
        else 
        {
            totalprice += lprice * Y[i];
            // cout << totalprice << '\n';
            cnt2++;
        }
    }
    cout << totalprice << '\n';
    return 0;
}