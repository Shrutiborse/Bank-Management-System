#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;


class Bank{
	char f1[50];
	char f2[50];
	char type;
	float balance;
	public:
		void openacc();
		void deposit();
		void withdraw();
		void display();
};

void Bank:: openacc(){
	cout<<"Enter your First name"<<endl;
	cin.ignore();
	cin.getline(f1,50);
	cout<<"Enter your Last name"<<endl;
	cin.ignore();
	cin.getline(f2,50);
	cout<<"What type of account you want to open saving (s) or current (c)"<<endl;
	cin>>type;
	cout<<"Enter amount that you want to deposit:"<<endl;
	cin>>balance;
	cout<<"Congratulations.. you new account is created !"<<endl;
}

void Bank::deposit(){
	float a;
	cout<<"Enter the amount that you want to deposit:"<<endl;
	cin>>a;
	balance+=a;
	cout<<"your new balance is: /t"<<balance<<endl;
}

void Bank::display(){
	cout<<"Your account name is:"<<f1<<f2<<endl;
	if(type=='s'){
		cout<<"This is saving account/n";
	}
	else{
		cout<<"This is current account/n";
	}
	cout<<"Your balance in account is:"<<balance<<endl;
	cout<<endl;
}

void Bank::withdraw(){
	float amount;
	cout<<"Enter amount that you want to withdraw :"<<endl;
	cin>>amount;
	if(balance<amount){
		cout<<"insuffient balance in your account";
		exit(0);
	}
	balance-=amount;
	cout<<"Your current balance is:"<<balance<<endl;
}

int main(){
	cout<<"******************* BANK MANAGEMENT ************************"<<endl;
	cout<<"\n";
	int opt, ch;
	Bank obj;
	do{
	cout<<"Choose Option from following:"<<endl;
	cout<<"1) Open Account"<<endl;
	cout<<"2) Deposit Money"<<endl;
	cout<<"3) Withdraw Money"<<endl;
	cout<<"4) Display "<<endl;
	cout<<"5) Exit "<<endl;
	cout<<"\n choose :";
	cin>>opt;
	switch(opt){
		case 1:
			cout<<"1) Open account"<<endl;
			obj.openacc();
			break;
			
		case 2:
			cout<<"2) Deposit Money"<<endl;
			obj.deposit();
			break;
			
		case 3:
			cout<<"3) Withdraw Money"<<endl;
			obj.withdraw();
			break;
			
		case 4:
			cout<<"4) Display"<<endl;
			obj.display();
			break;
			
		case 5:
			if(opt=='5'){
				exit(1);
			}
		
		default:
			cout<<"This is not valid option"<<endl;
	}
		cout<<"\n if you want to choose option again then press :: Y "<<endl;
		cout<<"if you want to Exit then press :: N"<<endl;
		ch=getch();
			
		if(ch=='N' || ch=='n'){
			exit(0);
		}
	}while(ch=='Y'|| ch=='y');
	
	getch();
	return 0;
}
