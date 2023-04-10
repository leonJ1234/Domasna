#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int b;
    vector<int> orientiran[n];
    vector<int> neorientiran[n];
    for(int i=0;i<n;i++)
    {
        cin >>a>>b;
        orientiran[a].push_back(b);
        neorientiran[a].push_back(b);
        neorientiran[b].push_back(a);
    }
    return 0;
}
