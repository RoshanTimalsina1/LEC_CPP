#include<iostream>
using namespace std;

   
int get_num()
{
    int num_1;
    cout<<"Enter number to swap: "<<endl;cin>>num_1;
    return num_1;

}
void swap(int num_1 , int num_2)
{
    int temp;
    temp= num_1;
    num_1= num_2;
    num_2= temp;

    cout<<"The numbers after swapping are: "<<num_1<<" , "<<num_2;
}

int main(){
      
   int num_3 =get_num();
   int num_4=get_num();
   swap(num_3,num_4);
   return 0;

}