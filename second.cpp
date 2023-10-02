#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a;
        int ar[a];
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
        }
        if(ar[0]==1)b=2;
        else b=1;
        ///if(a>=2)
        //{
            for(int i=1;i<a;i++)
            {
            if(b+1==ar[i])b=b+2;
            else {
                b=b+1;
            }
           //}
          // cout<<b<<endl;
        }
        cout<<b<<endl;
    }
}