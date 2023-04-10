#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> s;
    char c;
    int zbir=0;
    while(cin>>c && c!='=')
    {

        if(c!='+' && c!='-' && c!='*')
        {
            s.push(c-'0');
        }
        else
        {
            int br1=s.top();
            s.pop();
            int br2=s.top();
            s.pop();
            cout<<br1<<" "<<br2<<endl;
            if(c=='+')
            {
                zbir=br1+br2;
                s.push(zbir);
            }
            else if(c=='-')
            {
                zbir=+br1-br2;
                s.push(zbir);
            }
            else if(c=='*')
            {
                zbir=+br1*br2;
                s.push(zbir);
            }
            cout<<zbir<<endl<<"ABSFDSDSD"<<endl;
        }
    }
    cout<<s.top();

    return 0;
}
