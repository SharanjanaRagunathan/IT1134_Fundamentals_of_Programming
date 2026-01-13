#include<iostream>
using namespace std;
int main()
{
    int a[3][4]={
    {72,75,68,74}
    {80,82,78,81}
    {66,70,72,68}
    };
int maxnum=a[0][0];
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        if(a[i][j]>maxnum)
        {
            maxnum=a[j][3];
    }
}
}
cout<<maxnum
return 0;
}
