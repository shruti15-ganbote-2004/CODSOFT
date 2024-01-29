#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
bool myturn(int computersecret,bool iswinner)
{
	int guess;
	cout<<"Enter your guess";
	cin>>guess;
	if(guess>computersecret)
	{
		cout<<"Guess is too high!";
		iswinner=false;
	}
	else if(guess<computersecret)
	{
		cout<<"Guess is too low!";
		iswinner=true;
	}
	else
	{
		cout<<"You won!";
		iswinner=true;
	}
	return iswinner;
}
void computerturn(int mysecret,int computersecret)
{
	bool iswinner;
	int low=0;
	int high=100;
	do
	{
		int guess=(low+high)/2;
		cout<<"Computer's guess"<<guess;
		if(guess==mysecret)
		{
			cout<<"Computer won!"<<computersecret;
			iswinner=true;
		}
		else
		{
			if(guess>mysecret)
			{
				cout<<"\nGuess is too high!";
				high=guess-1;
			}
			else if(guess<mysecret)
			{
				cout<<"\nGuess is too low!";
				low=guess+1;
			}
			iswinner=myturn(computersecret,iswinner);
		}
	}while(iswinner==false);
}
int main()
{
	int choice;
	do
	{
		srand(time(0));
		int mysecret;
		int computersecret=rand()%100;
		cout<<"Enter your number between 0 and 100:";
		cin>>mysecret;
		computerturn(mysecret,computersecret);
		cout<<"Do you want to play again?";
		cin>>choice;
	}
	while(choice=='Y'||choice=='y');
}
