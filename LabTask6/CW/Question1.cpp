#include <iostream>
using namespace std;

class BankAccount{
	private:
		bool isActive = true;
		string accountnumber;
		float balance;
	public:
		BankAccount(string accnum) : accountnumber(accnum) {}
		void activeChange(){
			(isActive == true) ? isActive = false : return;
		}
		string getaccnumber(){
			return accountnumber;
		}
		void deposit(float val){
			balance += val;
		}
		void withdraw(float val){
			if(balance != 0){
				balance -= val;
			}
		}
};

class SavingAccount : public BankAccount{
	private:
		float interest_mon;
	public:
		SavingAccount(string accnum, float inter_m) : base(accnum), interest_mon(inter_m) {}
		void applyinterest(){
			float interest = balance * interest_mon;
			balance += interest;
		}
};

class CheckingAccount : public BankAccount{
	private:
		float overdraft = 0;
		float limit = 10000;
	public:
		CheckingAccount(string accnum) : base(accnum) {}
		void checkwithdraw(float val){
			if(val > balance){
				if( limit < (balance - val)){
					overdraft += balance - val;
					limit -= overdraft;
					withdraw(val);
				}
				else{
					cout<<"Insufficient balance and overdraft condition not met."<<endl;
				}
			}
			else{
				withdraw(val);
			}
		}
};

class Customer{
	private:
		int id;
		SavingAccount savingacc;
		CheckingAccount checkingacc;
	public:
		Customer(int i, string snum, string cnum) : id(i), savingacc(snum), checkingacc(cnum) {}
	
};

class Employee{
	private:
		int id;
		SavingAccount* savingptr = nullptr;
		CheckingAccount* checkingptr = nullptr;
	public:
		Employee(int i) : id(i) {}
		void assignSAccount(SavingAccount& s){
			savingptr = &s;
		}
		void assignCAccount(CheckingAccount& c){
			checkingptr = &c;
		}
};

class Teller : public Employee{
	public:
		Teller(int i) : base(i) {}
		void freezeSAcc(){
			savingptr.
		}
		void depositS(float val){
			savingptr.deposit(val);
		}
		void depositC(float val){
			checkingptr.deposit(val);
		}
		void withdrawS(float val){
			savingptr.withdraw(val);
		}
		void withdrawC(float val){
			checkingptr.checkwithdraw(val);
		}
};

int main(int argc, char** argv){
	return 0;
}