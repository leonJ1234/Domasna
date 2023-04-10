#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int b;
    bool orientiran[n][n];
    bool neorientiran[n][n];
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        orientiran[a][b]=1;
        neorientiran[a][b]=1;
    }

    return 0;
}
