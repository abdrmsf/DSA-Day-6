#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int repeatingelement(vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
{
    for(int j=i+1;j<arr.size();j++)
    {
        if(arr[i]==arr[j])
        {
            return arr[i];
        }
    }
}
}
int main()
{
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<arr.size();i++)
{
    cin>>arr[i];
}
cout<<repeatingelement(arr)<<endl;
return 0;
}