#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int top1 = numer1 * denom2;
    int top2 = numer2 * denom1;
    int top = top1 + top2;
    
    int bottom = denom1 * denom2;
    for(int i=2;i<=1000;i++)
    {
        if(top<i || bottom<i) break;
        if(top%i==0 && bottom%i==0)
        {
            while(1)
            {
                if(top%i!=0 || bottom%i!=0) break;
                else
                {
                    top/=i;
                    bottom/=i;
                }
                
            }
        }
    }
    answer.push_back(top);
    answer.push_back(bottom);
    return answer;
}
