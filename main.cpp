#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    deque<int>dq;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        dq.push_back(x);
    }
    int sumS = 0, sumD = 0,cnt = 0;
    while(dq.size())
    {
        if(dq.front() >= dq.back())
        {
            if(cnt%2==0)
                sumS += dq.front();
            else
                sumD += dq.front();
            dq.pop_front();
        }
        else
        {
            if(cnt%2==0)
                sumS += dq.back();
            else
                sumD += dq.back();
            dq.pop_back();
        }
        cnt++;
    }
    cout<<sumS <<" "<<sumD<<endl;
    return 0;
}
