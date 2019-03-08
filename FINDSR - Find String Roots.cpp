#include<bits/stdc++.h>
#define MAX 100002
using namespace std;


vector<int>vd[MAX];
void divisors()
{
    int i,j;
    for(i=1; i<=MAX; i++)
    {
        for(j=i; j<=MAX; j+=i)
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

    while(1)
    {

        string s;
        cin>>s;
        if(s[0]=='*')
            break;
        int l = s.size(),k,i,j;
        int ans=100040,n=1;
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
                n =max(n,(l/lss));
                //ans= min(ans,lss);
             //cout<<ss<<" "<<ans<<endl;
            }
        }
            printf("%d\n",n);
    }

    return 0;
}


