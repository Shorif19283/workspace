#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        int ar[a];
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
        }
        if(ar[0]==1)b=2;
        else b=1;
        for(int i=1;i<a;i++)
        {
            if(ar[i]!=b+1)b=b+1;
            else{
                b=b+2;
            }
        }
        cout<<b<<endl;
    }
}