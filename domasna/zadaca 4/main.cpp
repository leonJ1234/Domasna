#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string username,password;
    queue<pair<string, string>> q;
    queue<pair<string, string>> q2;
    for (int i = 0; i < n; i++) {

        cin>>username>>password;
        q.push({username, password});
    }
cout<<endl;
int tocno=0;
    while(tocno!=1 && cin>>username>>password && username!="KRAJ")
        {
            while(!q.empty())
            {
                if(q.front().first==username && q.front().second==password)
                {
                    cout<<"Najaven"<<endl;
                    tocno=1;
                    break;
                }
                q2.push({q.front().first,q.front().second});
                q.pop();
            }
            while(!q2.empty())
            {
                q.push({q2.front().first,q2.front().second});
                q2.pop();
            }
            if (tocno==0)
            {
                cout<<"Nenajaven"<<endl;
            }
        }

    return 0;
}


