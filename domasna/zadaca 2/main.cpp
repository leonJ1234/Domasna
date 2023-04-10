#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    queue<string>licna;
    queue<string>pasos;
    queue<string>vozacka;
    string ime;
    bool x,y,z;
    for(int i=0;i<n;i++)
    {
        cin>>ime>>x>>y>>z;
        if(x)
        {
            licna.push(ime);
        }
        if(y)
        {
            pasos.push(ime);
        }
        if(z)
        {
            vozacka.push(ime);
        }
    }
    while(!licna.empty())
    {
        cout<<licna.front()<<" licna karta "<<endl;
        licna.pop();

    }
    while(!pasos.empty())
    {
        cout<<pasos.front()<<" pasos "<<endl;
        pasos.pop();

    }
    while(!vozacka.empty())
    {
        cout<<vozacka.front()<<" vozacka " <<endl;
        vozacka.pop();

    }

  return 0;
}
