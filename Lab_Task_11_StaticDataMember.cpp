#include<iostream>
using namespace std;
class BankAccount
{
	private:
		string AccountHolder;
		double balance;
		
		static int totalAccounts;
	public:
		BankAccount(string name, double initialBalance)
		{
			AccountHolder = name;
			balance = initialBalance;
			
			totalAccounts++;
			
		}
		static void displayTotalAccounts()
		{
			cout<<"Total bank account created: "<<totalAccounts<<endl;
		}
		void displayInfo()
		{
			cout<<"Account holder: "<<AccountHolder<<"\nBalance: $"<<balance<<endl;
		}
};
int BankAccount::totalAccounts = 0;
int main()
{
	BankAccount ac1("Husnaat", 6000);
	BankAccount ac2("Ali", 9000);
	BankAccount ac3("abbas", 4000);
	
	ac1.displayInfo();
	ac2.displayInfo();
	ac3.displayInfo();
	
	cout<<"========================================"<<endl;
	
	BankAccount::displayTotalAccounts();
	return 0;
	

}
