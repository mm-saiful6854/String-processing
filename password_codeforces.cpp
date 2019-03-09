#include<bits/stdc++.h>
using namespace std;
int pre_array[1000005];

int main()
{
    string s;
    cin>>s;
    int l=s.size(),i;
    pre_array[0]=pre_array[1]=0;
    for(i=2; i<=l; i++)
    {
        int j=pre_array[i-1];
        while(true)
        {
            if(s[j]==s[i-1])
            {
                pre_array[i]=j+1;
                break;
            }
            if(j==0)
            {
                pre_array[i]=0;
                break;
            }
            j=pre_array[j];
        }
    }
    if(pre_array[l]==0)
    {
        cout<<"Just a legend"<<endl;
        return 0;
    }

    bool flag=false;
    for(i=2;i<l;i++)
    {
        if(pre_array[i]==pre_array[l])
        {
            flag=true;
            break;
        }
    }


    if(flag)
    {
        for(i=0;i<pre_array[l];i++)
        {
            cout<<s[i];
        }
        cout<<endl;
        return 0;
    }

    if(pre_array[pre_array[l]]==0)
    {
        cout<<"Just a legend"<<endl;
        return 0;
    }
    flag=false;

    for(i=2;i<l;i++)
    {
        if(pre_array[i]==pre_array[pre_array[l]])
        {
            flag=true;
            break;
        }
    }


    if(flag)
    {
        for(i=0;i<pre_array[pre_array[l]];i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }


    return 0;

}
