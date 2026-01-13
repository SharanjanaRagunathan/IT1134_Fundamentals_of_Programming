#include<iostream>
using namespace std;
int main()
{
  int n,i,flg1=1,flg2=1,flg3=0,j;
  float sum=0;
  cout<<"enter the number:";
  cin>>n;
  for(i=2;i<=n/2;i++)
  {

      flg1=1;
      flg2=1;
      for(j=2;j<i;j++)
      {
          if(i%j==0)
          {
              flg1=0;
              j=i;
          }
      }
      for(j=2;j<n-i;j++)
        if((n-1)%j==0)
      {
          flg2=0;
          j=n-i;
      }
      if(flg1=1==1&&flg2==1)
      {
          cout<<n<<"="<<i<<"+"<<n-1<<endl;
          flg3=0;
      }
      if(flg3==0)
        cout<<n<<"="<<i<<"+"<<n-i<<endl;
        flg3=0;
  }
  return 0;
}
