#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    char name[20];
    int ch,tp,st,n,ph;
	cout<<" Welcome to Ajmal AI international,\n Enter your name : ";
    cin.getline(name,20);
    cout<<" Enter your phone number: ";
    cin>>ph;
     if(ph==10)
    {
		cout<<"verified";
	}
	else
	{
		cout<<"sorry invalid phone number";
		exit(0);
	}
    cout<<" Thank you Mr/Mrs "<<name <<", You have been registered !\n";
    cout<<" Choose your options :\n";
    cout<<" 1) Career guidence \n";
    cout<<" 2) Read some stories \n";
    cout<<" 3) Wanna play a game ? \n";
    cout<<" 4) Play quiz \n";
    cout<<" 5) exit \n";
    cout<<" Enter the option : ";
    cin>>ch;
    if(ch==1)
    {
		cout<<"";
	}
	else if(ch==2)
	{
		cout<<"Select your languages \n";
		cout<<"1.English\n";
		cout<<"2.Malayalam\n";
		cout<<"3.Chinese\n";
		cout<<"4.Arabic\n";
		cout<<"5.Hindi\n";
		cout<<"Enter your choice";
		cin>>st;
	}
	else if(ch==3)
	{
		cout<<"goto https://google.com";
	}
	else if(ch==4)
	{
		cout<<"Choose your topic \n";
		cout<<"1. International wise \n";
		cout<<"2. National wise \n";
		cout<<"3. State wise \n";
		cout<<"4. History \n";
		cout<<"5. Science \n";
		cout<<"6. Geology \n";
		cout<<"7. Technology \n";
		cout<<"8. None of the above\n";
		cin>>tp; 
		if(tp==1)
		{
			cout<<"Choose your points \n";
			cout<<"1.10 \n";
			cout<<"2.15 \n";
			cout<<"3.20 \n";
			cout<<"Input \n";
			cin>>n;
		}			
			
				
	}
	else if(ch==5)
	{
		cout<<"Thank you and have a nice day";
		exit(0);
		
	}	 
	else
	{
		cout<<"Sorry ! Invalid option";
		exit(0);
	}
	return 0;
} 
