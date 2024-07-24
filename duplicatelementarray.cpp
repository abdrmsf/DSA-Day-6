#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<arr.size();i++)
{
    cin>>arr[i];
}
for(int i=0;i<arr.size();i++)
{
    for(int j=i+1;j<arr.size();j++)
    {
        if(arr[i]==arr[j])
        {
            cout<<arr[i]<<" ";
        }
    }
}
return 0;
}