#include <iostream>
using namespace std;
main()
{
	int pin,option;
	double balance1,balance=150000,withdraw,deposit,net,recharge;;
	int phone;
	cout<<"          WELCOME CUSTOMER    "<<endl;
	cout<<"Enter your secret pin "<<endl;
	cin>>pin;
	
	if (pin==1155)
	{
		cout<<"Choose a transaction"<<endl;
		balance1=balance;
	}
	cout<<"1> Check Balance"<<endl;
	cout<<"2> Withdraw"<<endl;
	cout<<"3> Deposit"<<endl;
	cout<<"4> Recharge"<<endl;
	cout<<"5> End"<<endl;
	cin>>option;
	
	switch(option)
	{
		case 1:
			cout<<"BALANCE INQUIRY"<<endl;
			cout<<"Your current balance is  "<<balance1<<endl;
	    break;
		case 2:	
		cout<<"      WITHDRAW "<<endl;
		cout<<"Enter amount to withdraw :"<<endl;
		cin>>withdraw;
		if (withdraw<=balance1)
		{
		balance1=balance1-withdraw;
		cout<<"You withdrew :"<<withdraw<<endl;
		cout<<"Your current balance is : "<<balance1<<endl;
	}
	else
	cout<<"Insufficient balance";
	break;
	case 3:
		cout<<"     Deposit"<<endl;
		cout<<"Enter amount to deposit :";
		cin>>deposit;
		balance1=balance1+deposit;
		cout<<"You deposited :"<<deposit<<endl;
		cout<<"Your new balance is  :"<<balance1<<endl;
		break;
	case 4:
	cout<<"         Recharge "<<endl;
	cout<< "Choose network provider"<<endl;
	cout<< "1> GLO "<<endl;
	cout<< "2> MTN "<<endl;
	cout<< "3> AIRTEL "<<endl;
	cout<< "4> 9MOBILE "<<endl; 
	cin>> net;
	
	if (net==1)
	{
	cout<<"Enter your phone number :"<<endl;
	cin>>phone;
	cout<<"Enter anount to be recharged :"<<endl;
	cin>>recharge;
	cout<<"     The number"<<phone;
	cout<<"will be credited"<< recharge<<endl;
}
else if (net==2)
{
	cout<<"Enter your phone number :"<<endl;
	cin>>phone;
	cout<<"Enter anount to be recharged :"<<endl;
	cin>>recharge;
	cout<<"       The number"<<phone;
	cout<<"will be credited"<<recharge<<endl;
}
else if (net==3)
{
	cout<<"Enter your phone number :"<<endl;
	cin>>phone;
	cout<<"Enter anount to be recharged :"<<endl;
	cin>>recharge;
	cout<<"       The number"<<phone;
	cout<<"will be credited"<<recharge<<endl;
}
else if (net==4)
{
	cout<<"Enter your phone number :"<<endl;
	cin>>phone;
	cout<<"Enter anount to be recharged :"<<endl;
	cin>>recharge;
	cout<<"       The number"<<phone;
	cout<<"will be credited"<<recharge<<endl;
}
break;
case 5:
	cout<<"  Thanks for using our ATM ";
	break;
	default:
		cout<<"Invalid selection, try again ";
	break;

		 
		
			
	}
	
}
