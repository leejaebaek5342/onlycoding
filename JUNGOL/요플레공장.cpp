#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N,S;
    long long totalprice = 0;
    cin >> N >> S;
    vector<long long>C(N,0),Y(N,0);
    long long lprice = 0;

    for(int i = 0; i < N; i++)
    {
        cin >> C[i] >> Y[i];
    }
    totalprice += C[0] * Y[0];
    lprice = C[0];

    for(int i = 1; i < N; i++)
    {
        lprice = min(lprice + S, C[i]);
        
        totalprice += lprice * Y[i];
    }
    
    cout << totalprice << '\n';
    return 0;
}