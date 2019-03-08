//UVa - 00455

#include<bits/stdc++.h>

using namespace std;
int n=85;

vector<int>vd[85];

void divisors()
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j+=i)
        {
            vd[j].push_back(i);
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    divisors();
    int t,cases=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l = s.size(),k,i,j;
        int ans=100;
        for(k=0; k < vd[l].size(); k++)
        {
            string ss(s.begin(),s.begin() + vd[l][k]);
            int lss = ss.size();
            bool flag = true;
            for(i=lss; i<l; i+=lss)
            {

                for(j=0; j<ss.size(); j++)
                {
                    if(s[i+j]!=ss[j])
                    {
                        flag =false;
                        break;
                    }
                }
                if(!flag)
                    break;
            }
            if(flag)
            {
             ans= min(ans,lss);
            }
        }
        printf("%d\n",ans);
        if(t)
            puts("");
    }

    return 0;
}
