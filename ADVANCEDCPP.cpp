#include<bits/stdc++.h>
using namespace std;
vector<int> prime(vector<int> a,int n)
{
    for(int i=2;i<=n;i++)
    {
        int l=0;
        for(int j=2;j<=n;j++)
        {
            if(i%j==0)
            {
                l=l+1;
            }
        }
        if(l==1)
        {
            a.push_back(i);
        }
    }
    return a;
}


int loop(vector<int> a,int n)
{
    for (int i=0;i<a.size();i++)
    {
        for(int j=i;j<a.size();j++)
        {
            if(a[i]+a[j]==n)
            {
                cout<<n<<"="<<a[i]<<"+"<<a[j]<<endl;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    a = prime(b,n);
    loop(a,n);
    return 0;
}
