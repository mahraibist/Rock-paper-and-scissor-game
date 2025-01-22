#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
void banner();
char getUserInput();
char getComputerInput();
void showChoice(char input);
void showWinner(char user,char computer);
int main()
{
	system("cls");
	banner();
	char user_input=getUserInput();
	cout<<"Your choice is: "<<endl;
	showChoice(user_input);
	char computer_input=getComputerInput();
	cout<<"Computer choice is: "<<endl;
	showChoice(computer_input);
	showWinner(user_input,computer_input);
	return 0;
}
void banner()
{
	cout<<"\t| ------------------|"<<endl;
	cout<<"\t| Rock, Paper, Scissors |"<<endl;
	cout<<"\t| ------------------|"<<endl;
}
char getUserInput()
{
	char choice;
	cout<< "Choose your option: "<<endl;
	cout<< "(r) for Rock"<<endl <<"(p) for paper"<<endl<<"(s) for scissors"<<endl<<"->";
	cin>>choice;
	while(choice!='r'&& choice !='p' && choice !='s')
	{
		system("cls");
		banner();
		cout<<"Invalid input. Please enter a valid choice: "<<endl;
		cout<<"(r) for Rock" <<endl <<"(p) for paper"<<endl<<"(s) for scissors"<<endl<<"->";
		cin>>choice;
	}
	return choice;
}
char getComputerInput()
{
	srand(time (0) );
	int choice= rand() % 3;
	if(choice==0)
	{
		return 'r';
	}
	else if(choice==1)
	{
		return 'p';
	}
	else
	{
	return 's';
    }
}
void showChoice(char input)
{
	if(input=='r')
	{
		cout<<"Rock"<<endl;
	}
	else if(input=='p')
	{
		cout<<"Paper"<<endl;
	}
	else
	{
		cout<<"Scissor"<<endl;
	}
}
void showWinner(char user,char computer)
{
	if(user== 'r' && computer=='s')
	{
		cout<<"You win! rock smashes the scissor" <<endl;	
	}
	else if(user=='p' && computer=='r')
	{
		cout<<"You win! paper wraps the rock"<<endl;
	}
	else if(user=='s'  && computer=='p')
	{
		cout<<"You win! scissor cut the paper"<<endl;		
	}
	else if(computer=='s'&& user=='p')
	{
		cout<<"Computer win! scissor cut the paper"<<endl;
	}
	else if(computer=='r'&& user=='s')
	{
		cout<<"Computer win! rock smashes the scissor"<<endl;
	}
	else if(computer=='p' && user=='r')
	{
		cout<<"Computer win! paper wraps the rock"<<endl;
	}
	else
	{
		cout<< "Tie! play again &  win the game"<<endl;
	}
	
}
