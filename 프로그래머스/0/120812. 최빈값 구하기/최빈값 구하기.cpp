#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int count[1000]={0};
    int mx=0;
    int cnt=0;
    int mxcount=0;
    
    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<size(array);j++)
        {
            if(i==array[j])
            {
                count[i]++;
            }
        }
    }
    for(int i=0;i<1000;i++)
    {
        mx=max(mx,count[i]);
        if(mx == count[i]) 
        {
            mxcount = i;
        }
        
    }
    for(int i=0;i<1000;i++)
    {
        if(mx==count[i])
        {
            cnt++;
            if(cnt>1) return -1;
        }   
    }
    return mxcount;
}