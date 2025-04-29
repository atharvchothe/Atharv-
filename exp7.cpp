#include<iostream>
class BankAccount {
	private : 
		string owner_name;
		 double balance,deposite ;
		 static int  tot_amount;
	public :
		BankAccount()
		{
			cout<<"\n Enter the name of the bank account owner : "<<endl;
			cin>>owner_name;
			cout<<"Enter the inital deposite : "<<endl;
		}
		void deposite()
		{
			cout<<"\n Enter the amount to deposite: "<<endl;
			cin>>deposite;
			tot_amount + = deposite ;
			cout<<"\n the total amount after deposite "<<tot_deposite<<endl;
		}
		void withdraw()
		{
			cout<<"\n Enter the amount to withdraw: "<<endl;
			cin>>withdraw;
			tot_amount -= withdraw;
			cout<<"\n the total amount after withdraw"<<tot_deposite<<endl;
		}
		void transfer()
		{
			
 		}
		
};
