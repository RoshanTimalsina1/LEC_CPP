#include<iostream>
using namespace std;
class degree{
    private:
    int number;
    int rad_eq;
    float a;
    public:
    void getdata()
    {
        cout<<"Enter degree to convert into radian"<<endl;
        cin>>number;

    }
    void calcdata()
    {
        rad_eq = 3.1415 * number/180;

    }

    void showdata()
    {
        
        cout<<"The radian equivalent of degree is: "<<rad_eq; 
    }
};

int main()
{   
    
    degree s1;
    s1.getdata();
    s1.calcdata();
    s1.showdata();
    return 0;
}