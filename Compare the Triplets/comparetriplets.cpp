#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[3],p=0,q=0;
    cin>>a[0]>>a[1]>>a[2];
    int b[3];
    cin>>b[0]>>b[1]>>b[2];
    for(int i=0;i<3;i++)
        {
        if(a[i]>b[i])
            p++;
        else if(b[i]>a[i])
            q++;
    }
    cout<<p<<" "<<q;
    return 0;
}