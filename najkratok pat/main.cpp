#include <bits/stdc++.h>

using namespace std;

vector<int> dfs(int moment,int kraj,vector<int> g[],bool poseteni[])
{
    poseteni[moment]=1;
    vector<int> v;
    if(moment==kraj)
    {
        v.push_back(moment);
        return v;
    }
    for (int j=0;j<g[moment].size();j++)
    {
    int i = g[moment][j];
    if (!poseteni[i])
    {
        vector<int> v = dfs(i,kraj,g,poseteni);
        if (!v.empty())
        {
            v.push_back(moment);
            return v;
        }
    }
}
    return v;
}

int main()
{
    int n;
    cin>>n;
    vector<int> g[n];
    bool poseteni[n]={false};
    int pocetok,kraj;
    cin>>pocetok>>kraj;
    int a,b;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> pateka = dfs(pocetok,kraj,g,poseteni);
    reverse(pateka.begin(),pateka.end());
    for (int i = 0; i < pateka.size(); i++)
    {
    cout<<pateka[i]<<" ";
    }
    return 0;
}
