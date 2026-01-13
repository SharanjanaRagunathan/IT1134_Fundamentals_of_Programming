#include<iostream>
using namespace std;
int main()
{
    int age=18;
    bool voting_registered=true;

    if(age>=18&&voting_registered==true){
        cout<<"eligible to vote\n";
    }else{
        cout<<"not eligible to vote\n";
    }
    return 0;
}
