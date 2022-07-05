#include <iostream>
using namespace std;
main()
{
	int card_no,option,deposit,option2,balance1;
	double balance=50000;
	int premium=18400,confam=4615,yanga=2565;
	int compact2=12400,compact=7900,padi=1850;
	char confirm=' ';
	cout<<"               WEOLCOME TO DSTV    "<<endl;
	cout<<"Enter your smartcard number"<<endl;
	cin>>card_no;
	
	if (card_no==180404059)
	{
	cout<<"Choose a transaction"<<endl;
	cout<<"1>Check account info"<<endl;
	cout<<"2> Top up account "<<endl;
	cout<<"3> Subscribe to a package "<<endl;
	cout<<"4> Quit "<<endl;
	cin>>option;
	
	switch (option)
	{
		case 1:
			cout<<"Name : akintola tope"<<endl;
			cout<<"Current Package : DSTV Padi "<<endl;
			cout<<"Package Due Date : 12/6/2021"<<endl;
			cout<<"Current account balance : "<<balance<<endl;
			break;
			case 2:
				cout<<"Enter amount to topup :";
		        cin>>deposit;
		        balance=balance+deposit;
		        cout<<"You deposited :"<<deposit<<endl;
	          	cout<<"Your new balance is  :"<<balance<<endl;
	        break;
	        case 3:
	        	cout<<"          Choose a package"<<endl;
				cout<<"1> DSTV Premium "<<endl;
				cout<<"2> DSTV Compact Plus "<<endl;
				cout<<"3> DSTV Compact "<<endl;
				cout<<"4> DSTV Comfam "<<endl;
				cout<<"5> DSTV Yanga "<<endl;
				cout<<"6> DSTV Padi"<<endl;
				cin>>option2;
				
				if (option2==1)
				{
					cout<<"    Confirm you purchase."<<endl;
					cout<<"Package : DSTV Premiun "<<endl;
					cout<<"Price : 18400 monthly" <<endl;
					cout<<"    y/n ";
					cin>>confirm;
				    
					if (confirm=='y')
					{
						cout<<"Congrats your package will be activated shortly ";
						cout<<"and if you have and active package, it will be activated at the end of your currenty package"<<endl;
						balance1=balance-premium;
						cout<<"Your new account balance is : "<<balance1<<endl;  							
					}
					else 
					{
						cout<<"Thanks for using DSTV";
					}}
					else if (option2==2)
				{
					cout<<"    Confirm you purchase."<<endl;
					cout<<"Package : DSTV Compact Plus "<<endl;
					cout<<"Price : 12400 monthly" <<endl;
					cout<<"    y/n ";
					cin>>confirm;
				    
					if (confirm=='y')
					{
						cout<<"Congrats your package will be activated shortly ";
						cout<<"and if you have and active package, it will be activated at the end of your currenty package"<<endl;
						balance1=balance-compact2;
						cout<<"Your new account balance is : "<<balance1<<endl;  						
					}
					else 
					{
						cout<<"Thanks for using DSTV";
				}
				}else if  (option2==3)
				{
					cout<<"    Confirm you purchase."<<endl;
					cout<<"Package : DSTV Compact  "<<endl;
					cout<<"Price : 7900 monthly" <<endl;
					cout<<"    y/n ";
					cin>>confirm;
				    
					if (confirm=='y')
					{
						cout<<"Congrats your package will be activated shortly ";
						cout<<"and if you have and active package, it will be activated at the end of your currenty package"<<endl;
						balance1=balance-compact;
						cout<<"Your new account balance is : "<<balance1<<endl;  						
					}
					else 
					{
						cout<<"Thanks for using DSTV";
				}
				}else if (option2==4)
				{
					cout<<"    Confirm you purchase."<<endl;
					cout<<"Package : DSTV Confam  "<<endl;
					cout<<"Price : 4615 monthly" <<endl;
					cout<<"    y/n ";
					cin>>confirm;
				    
					if (confirm=='y')
					{
						cout<<"Congrats your package will be activated shortly ";
						cout<<"and if you have and active package, it will be activated at the end of your currenty package"<<endl;
						balance1=balance-confam;
						cout<<"Your new account balance is : "<<balance1<<endl;  						
					}
					else 
					{
						cout<<"Thanks for using DSTV";
				}
				}else if (option2==5)
				{
					cout<<"    Confirm you purchase."<<endl;
					cout<<"Package : DSTV Yanga  "<<endl;
					cout<<"Price : 2565 monthly" <<endl;
					cout<<"    y/n ";
					cin>>confirm;
				    
					if (confirm=='y')
					{
						cout<<"Congrats your package will be activated shortly ";
						cout<<"and if you have and active package, it will be activated at the end of your currenty package"<<endl;
						balance1=balance-yanga;
						cout<<"Your new account balance is : "<<balance1<<endl;  						
					}
					else 
					{
						cout<<"Thanks for using DSTV";
				}
				}else if (option2==6)
				{
					cout<<"    Confirm you purchase."<<endl;
					cout<<"Package : DSTV Padi  "<<endl;
					cout<<"Price : 1850 monthly" <<endl;
					cout<<"    y/n ";
					cin>>confirm;
				    
					if (confirm=='y')
					{
						cout<<"Congrats your package will be activated shortly ";
						cout<<"and if you have and active package, it will be activated at the end of your currenty package"<<endl;
						balance1=balance-padi;
						cout<<"Your new account balance is : "<<balance1<<endl;  						
					}
					else 
					{
						cout<<"Thanks for using DSTV";
					}
					break;
                } case 4:
			        	cout<<"Thanks for using DSTV ";
				  break;
					defualt:
						cout<<"Invalid selection, try again ";
				    break;
	
		 
		}
	}
 }
