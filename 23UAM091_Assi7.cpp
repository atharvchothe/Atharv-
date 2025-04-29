#include<iostream>
using namespace std;
class BankAccount{
	private:
		string name;
		double balance;
	public:
		BankAccount(){
			name = "unnamed";
			balance = 0;
		}
		BankAccount(string nm,double b){
			name = nm;
			balance = b;
			cout<<"Creating account for "<<name<<"with initial deposite : Rs."<<balance<<endl;
		}
	void deposite(double amount)
	{
		balance += amount;
		cout<<"Depositing Rs."<<balance<<" into "<<name<<" 's account"<<endl;
	}
	void withdraw(double amount){
		if(amount>balance){
		   //throw InsufficientFundsException;    //create class InsufficientFundsException
		    cout<<"error balance"<<endl;
			}
	    balance -= amount;
		    cout<<"Withdrawing Rs."<<balance<<" into "<<name<<" 's account"<<endl;
	}
	void transfer(BankAccount &to, double amount){
		if(amount>balance){
			//throw InvalidTransactionException;
			cout<<"error trancefer"<<endl;
		}
		balance -=amount;
		to.balance +=amount;
		cout<<"Transfering Rs."<<amount<<" from "<<name<<" to "<<to.name<<endl;
		cout<<"new balance of "<<name<<" : "<<balance<<endl;
		cout<<"new balance of "<<to.name<<" : "<<to.balance<<endl;
	}
	void divideBalance(double divisor){
		if(divisor==0){
		    //throw DivideByZeroException;
		    cout<<"error divide"<<endl;
		}
		else{
		balance/=divisor;
		cout<<"Dividing balance by : "<<divisor<<endl;
		}	
	}
};


int main(){
	BankAccount b1("abc",5000);
	BankAccount b2("xyz",0);
	b1.deposite(100);
	b1.withdraw(50);
	b1.transfer(b2,100);
	b1.divideBalance(0);
	return 0;
	
	}
