#include<iostream>
using namespace std;
int sumfunction(int x,int y){
return x+y;}

int main()
         {int a,b;
             cout<<"enter a value for a:";
             cin>>a;
              cout<<"enter a value for b:";
             cin>>b;
             int sum=sumfunction(a,b);
             cout<<sum;
             return 0;
}

