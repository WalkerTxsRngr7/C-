#include <iostream>
using namespace std;


class BankAccount
{
	private: 
		string name;
		float balance;
		
	public:
		
		float deposit, withdraw;
		
		BankAccount(string strName, float fBalance)
		{
			name = strName;
			if (fBalance >= 0)
			{
				balance = fBalance;
			}
		}
		
		void deposit(float fDeposit)
		{
			balance += fDeposit;
			cout << name << " " << balance;
		}
		
		void withdraw(float fWithdraw)
		{
			if ((fWithdraw - balance) < 0)
			{
				cout << "You do not have enough money to withdraw " << fWithdraw;
				valid = false;
			} else {
				balance -= fWithdraw;
				valid = true;
			}
			cout << name << " " << balance;
		}
		
}
