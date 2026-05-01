#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int count[1000]={0};
    int mx=0;
    int cnt=0;
    int mxcount=0;
    
    for(int i=0;i<size(array);i++)
    {
        count[array[i]]++;
    }
    for(int i=0;i<1000;i++)
    {
        if(count[i]==0) continue;
        mx=max(mx,count[i]);
        if(mx == count[i]) 
        {
            mxcount = i;
        }
        
    }
    for(int i=0;i<1000;i++)
    {   
        if(count[i]==0) continue;
        if(mx==count[i])
        {
            cnt++;
            if(cnt>1) return -1;
        }   
    }
    return mxcount;
}