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
int sum=0,bum=0;
vector<int>arr(n);
for(int i=0;i<arr.size();i++)
{
    cin>>arr[i];
}
for(int i=0;i<arr.size();i++)
{
    sum=sum+arr[i];
}
bum=(arr[n-1]*(arr[n-1]+1))/2;
cout<<bum-sum<<endl;
return 0;
}