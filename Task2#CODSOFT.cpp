//#CODSOFT
//#C++Programming
//#Task2:Simple Calculator
//Code:
#include<iostream>
using namespace std;
int main()
{
    int X,Y,Z,choice;
    cout<<"Enter the values of X and Y:";
    cin>>X>>Y;
    do
    {
        cout<<"....Menu....";
        cout<<"\n1.Addition";
        cout<<"\n2.Subtraction";
        cout<<"\n3.Multiplication";
        cout<<"\n4.Division";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:Z=X+Y;
                   cout<<"Addition of X and Y is:"<<Z<<endl;
                   break;
            case 2:Z=X-Y;
                   cout<<"Subtraction of X and Y is:"<<Z<<endl;
                   break;
            case 3:Z=X*Y;
                   cout<<"Multiplication of X and Y is:"<<Z<<endl;
                   break;
            case 4:Z=X/Y;
                   cout<<"Division of X and Y is:"<<Z<<endl;
                   break;
            case 5:exit(0);
         }
     }
     while(choice!=6);
     return 0;
}
