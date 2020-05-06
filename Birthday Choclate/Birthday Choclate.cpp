#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a[1000],dt,m,temp,count=0,sum=0,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>dt>>m;
    for(i=0;i<n;i++)
    {
        sum=0;
        temp=0;
        for(j=i;j<n;j++)
        {
            if(temp<m)
            {
                sum=sum+a[j];
                temp++;
            }
        }
        if(sum==dt)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}