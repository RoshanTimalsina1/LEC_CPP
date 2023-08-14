#include<iostream>
using namespace std;

class Polygon
{
    public:

    int length;
    int height;

    void getdata1()
    {
        
        cout>>"Enter base and height of triangle: ">>endl;
        cin>> length>>height;
    }
    
    void getdata2()
    {
        
        cout>>"Enter length and breadth: ">>endl;
        cin>> length>>height;
    }




    virtual void Area() = 0;
        
    
};

class triangle : public Polygon 
{  
    public:  
      void Area() 
      {  
        double Area = (0.5)*length*height;
      }  
  };  

class rectangle : public Polygon
{
    public:
        void Area() 
      {  
        double Area = length*height;
      } 


};



int main()
{       
        Polygon *s
        triangle t;
        rectangle r;
        int x;
        cout>>"Choose your Polygon :"<<endl;
        cout>>"Type 1 for triangle and 2 for Rectangle">>endl;
        cin>> x;
        if(x==1)
        {

        }
    return 0;
}