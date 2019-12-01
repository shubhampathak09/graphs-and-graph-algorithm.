
#include<bits/stdc++.h>

using namespace std;


int main()
{
int n,q;
cin>>n>>q;
int a[n];
for(int i=1;i<=n;i++)
cin>>a[i];

while(q!=0)
{
    
    int d;
    cin>>d;
    int num=0;
    switch(d)
    {
        case 0:
        int l,r;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        num+=a[i]*pow(2,r-i);
        if(num%2==0)
        cout<<"EVEN"<<"\n";
        else
        cout<<"ODD"<<"\n";
        break;
        
        case 1:
        int x;
        cin>>x;
        a[x]=a[x]^1;
        break;
    }
q--;    
}

}
