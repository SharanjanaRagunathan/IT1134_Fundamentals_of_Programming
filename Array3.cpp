/*give multiplication table until 12 with user give number in multidimensional array*/
#include<iostream>
using namespace std;
void multiplicationTable(int num){
int table[13][13];
for(int i=1;i<=12;++i){
    for(int j=1;j<=12;++j){
    table[i][j]=i*j;
}
}
cout<<"multiplication Table for"<<num<<"\n";
for(int i=1;i<=12;++i){
    cout<<num<<"*"<<i<<"="<<table[num][i]<<endl;
}
}
int main(){
int num;
cout<<"enter the number:";
cin>>num;
multiplicationTable(num);
return 0;
}
