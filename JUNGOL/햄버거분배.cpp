#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    string table =  "";
    int N,k;
    int count = 0;
    cin >> N >> k;
    cin >> table;

    for (int i = 0; i < N; i++) {
        if (table[i] == 'P') {
            for (int j = i - k; j <= i + k; j++) {
                //범위 체크
                if (table[j] == 'H') {
                    //먹음 처리 = 'E'
                    table[j] = 'E';
                    count++;
                    break;
                }
            }
        }
    }   
    cout << count << '\n';
    return 0;
}