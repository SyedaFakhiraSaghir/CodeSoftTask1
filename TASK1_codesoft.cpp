#include <iostream>
#include <time.h>
using namespace std;

main()
{
	cout<<endl<<"****************************************************************************"<<endl ;
	cout<<"***************** N U M B E R    G U E S S I N G   G A M E *****************" << endl;
	cout<<"****************************************************************************" << endl;
	int num,exit=1;
	srand(time(0));
	int x=rand()%100;
	while(exit!=0)
	{
		cont:
		cout<<"\nEnter a number: ";
		cin>>num;
		cout<<x;
		if(num==x)
		{
			cout<<endl<<"Guess is correct : "<< x <<endl;
			cout<<"\nTo exit the program enter 0 else enter any number: ";
			cin>>exit;
		}
		else if(num>x)
		{
			cout<<endl<<"Guess too high"<<endl;
			goto cont;
		}
		else if(num<x)
		{
			cout<<endl<<"Guess too low"<<endl;
			goto cont;
		}
	}
}