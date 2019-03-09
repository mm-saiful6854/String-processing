#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cases=0;
    cin>>t;
    while(t--)
    {
        string s,ss;
        cin>>s>>ss;
        int pos=0;
         int cnt=0;
        pos = s.find(ss,pos);
        //cout<<pos<<endl;
        if(pos!=-1)
        cnt++;
        while(pos!=-1)
        {    pos = s.find(ss,pos+1);
            if(pos!=-1)
                cnt++;
        }
        printf("Case %d: %d\n",++cases,cnt);

    }

    return 0;
}
