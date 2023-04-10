#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    queue<pair<int,int>> q;
    int maks=0;
    int temp=0;
    for(int i = 0; i < n; i++)
    {
        int cas;
        int minuti;
        int d;
        cin>>cas>>minuti;
        cin>>d;
        int vlez=cas*60+minuti;
        int izlez=cas*60+minuti+d;
        while(!q.empty() && (q.front().second<vlez || q.front().second>izlez))
        {
            q.pop();
        }
        q.push(make_pair(vlez,izlez));
        if(q.size()>maks)
        {
            maks=q.size();
        }
    }

    cout<<maks;
    return 0;
}
