#include <bits/stdc++.h>

using namespace std;

int main()


{
    int n,i,a[1000],x=0,mn=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=a[0],max=a[0];
    for(i=0;i<n;i++)
    {
       if(min>a[i])
       {
           min=a[i];
           mn++;
       }
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            x++;
        }
    }
    cout<<x<<" "<<mn;

    return 0;


}
