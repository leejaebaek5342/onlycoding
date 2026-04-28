#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int a = numer1 * denom2;
    int b = numer2 * denom1;
    int sum = a + b;
    
    int c = denom1 * denom2;
    for(int i=2;i<=1000;i++)
    {
        if(sum<i || c<i) break;
        if(sum%i==0 && c%i==0)
        {
            while(1)
            {
                if(sum%i!=0 || c%i!=0) break;
                else
                {
                    sum/=i;
                    c/=i;
                }
                
            }
        }
    }
    answer.push_back(sum);
    answer.push_back(c);
    return answer;
}