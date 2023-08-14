#include<iostream>
using namespace std;

class Time{
    private:
    int hr , sec , min;
    Time()
    {
        hr=0;
        sec=0;
        min=0;
    }

    public:
    
    Time(int sec_in)
    {
         hr= (sec_in/3600);
        min= (sec_in%3600)/60;
        sec=(sec_in%3600)%60;
    }

    
    void showData()

    {
        cout<<"The converted time is: "<<endl;
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec ";
    }

};

int main()
{   
    int sec_in;
    cout<<"Enter time in seconds to convert: "<<endl;
    cin>>sec_in;
    Time obj1(sec_in);
    obj1.showData();
    return 0;
}