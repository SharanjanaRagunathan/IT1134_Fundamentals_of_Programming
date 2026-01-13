#include<iostream>
using namespace std;

int perimeterSurface(int height,int length)
{
    return 2*(height+length);
}
int areaSurface(int height,int length)
{
    return (height*length);
}
int volumeCube(int height,int length,int width)
{
    return (height*length*width);
}
int main(){
int height,length,width;
cout<<"enter the height of cube:";
cin>>height;

cout<<"enter the length of cube:";
cin>>length;

cout<<"enter the width of cube:";
cin>>width;

cout<<"perimeter of cubes front surface:"<<perimeterSurface(height,length)<<endl;

cout<<"area of cubes front surface:"<<areaSurface(height,length)<<endl;

cout<<"volume of cubes:"<<volumeCube(height,length,width)<<endl;
return 0;
}
