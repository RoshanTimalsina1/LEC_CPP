#include<iostream>
using namespace std;

const int pi=3.14159;

int getdata()
{   
    int radius;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    return radius;
}

void calcdata(int y)
{
    double Area;
    y=getdata();
    Area = pi*y^2;
    cout<<"The Area is : "<<Area;
}

int main()
{   
    int c;
   
    c=getdata();

    calcdata(c);
}