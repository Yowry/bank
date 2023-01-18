#include <iostream>
using namespace std;

class Account
{
protected:
	int account_Number;
	string account_Name;
	double account_Balance;
public:
	int Get_account_Number()
	{
		return account_Number;
	}
	void SetaccountNumber(int a)
	{
		account_Number = a;
	}
	string Get_account_Name()
	{
		return account_Name;
	}
	void Set_account_Name(string ac)
	{
		account_Name = ac;
	}
	double Get_account_Balance()
	{
		return account_Balance;
	}
	void Set_account_Balance(double b)
	{
		account_Balance = b;
	}
	void committing(double amount)
	{
		account_Balance = account_Balance + amount;
	}
	void withdraw(double amount)
	{
		if (amount <= account_Balance)
			account_Balance = account_Balance - amount;
		else
			cout << "Error the amount is not available in your account";
	}
	void display_AccountInfo()
	{
		cout << "account Number: " << account_Number << endl;
		cout << "account Name: " << account_Name << endl;
		cout << "account Balance: " << account_Balance << endl;
	}
};


class SavingsAccount : public Account
{
	double interest_Rate;

 public:
	double calculate_Interest()
	   {
         return account_Balance * interest_Rate;
	   }
    
	double GetinterestRate()
	   {
	     return interest_Rate;
	   }

	void Set_interest_Rate(double inter)
       {
         interest_Rate = inter;
	   }
};
int main()
{
	SavingsAccount obj; //calling the all void eith using the object
	obj.SetaccountNumber(441);
	obj.Set_account_Name("mohammed");
	obj.Set_account_Balance(22500);
	obj.display_AccountInfo();
	obj.committing(4000);
	cout << "account Balance after deposit 4000 : " << endl;
	obj.display_AccountInfo();
	obj.withdraw(3000);
	cout << "account Balance after withdraw 3000 : " << endl;
	obj.display_AccountInfo();
	obj.Set_interest_Rate(0.32);
	cout << "Calculate Interest: " << obj.calculate_Interest();
}