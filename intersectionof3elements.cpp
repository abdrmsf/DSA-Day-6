#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
vector<int>a{1,2,5,9};
vector<int>b{3,4,5,6};
vector<int>c{3,5,7,8};
vector<int>d;
for(int i=0;i<a.size();i++)
{
    for(int j=0;j<b.size();j++)
    {
        if (a[i]==b[j])
        {
            d.push_back(a[i]);
            b[j]=INT_MIN;
        }
    }
    for(int k=0;k<c.size();k++)
    {
        if (a[i]==c[k])
        {
            c[k]=INT_MIN;
        }
    }
}
for(int i=0;i<d.size();i++)
{
    cout<<d[i]<<" ";
}
cout<<endl;
return 0;
}