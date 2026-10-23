// C++ A  SIMPLE BBANK ACCOUNT SYSTEM


/* 

NAME:MARIPET KERETO
REG: CT101/G/26655/25
COURSE: COMPUTER SCIENCE

*/



#include <iostream>
using namespace std;

class BankAccount
{
	string name;
    int A_number;
    int balance;

    public:
	BankAccount(string y, int x, int z)
	{
		name = y;
		A_number = x;
		balance = z;
		
		cout<<"Account created succesfully"<<endl;
			
	}
	  ~BankAccount(){
		 cout<<"Account closed succesfully"<<endl;
	  }
	 	
	 void displayAccount()
	 {
	 	cout<<"======================"<<endl;
	 	cout<<"----Bank Account----"<<endl;
	 	cout<<"======================"<<endl;
	 	
	 	cout<<"Name      :  "<<name<<endl;
	 	cout<<"A. number : "<<A_number<<endl;
	 	cout<<"======================"<<endl;
	 	cout<<"Balance   : "<<balance<<endl;
	 	cout<<"======================"<<endl;
	 	
	 }
	 
	 
};



int main()
{
	BankAccount p1("john", 132, 45000);
	
	p1.displayAccount();
	
	return 0;
}