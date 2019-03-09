#include<bits/stdc++.h>
using namespace std;
string s;
int n;

int arry[1000002];
void prefix_array()
{
     //cout<<s<<" "<<n<<endl;
     //cout<<"sasa"<<endl;

    memset(arry,0,sizeof(arry));
    int i;
    arry[0]=0;

    arry[1]=0;

    for(i=2;i<=n;i++)
    {
        int j=arry[i-1];
        while(true)
        {
            if(s[j]==s[i-1])
            {
                arry[i] = j+1;
                break;
            }

            if(j==0){
                arry[i]=0;
                break;
            }

            j=arry[j];
        }

        int k = i-arry[i];
        if(i%k==0 && i/k>1)
        {
            printf("%d %d\n",i,i/k);
        }
    }

}


int main()
{
    int t,cases=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        cin>>s;
        //cout<<s<<" "<<n<<endl;
        printf("Test case #%d\n", ++cases);
        prefix_array();
        printf("\n");
        s="";

    }

    return 0;
}


