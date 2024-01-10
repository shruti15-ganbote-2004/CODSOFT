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
			       cout<<"\nAddition of X and Y:"<<Z<<endl;
			       break;
			case 2:Z=X-Y;
			       cout<<"\nSubtraction of X and Y:"<<Z<<endl;
			       break;
			case 3:Z=X*Y;
			       cout<<"\nMultiplication of X and Y:"<<Z<<endl;
			       break;
			case 4:Z=X/Y;
			       cout<<"\nDivision of X and Y:"<<Z<<endl;
			       break;
			case 5:exit(0);
		}
	}
	while(choice!=6);
	return 0;
}
