#include <iostream>
using namespace std;
class account{
	private:
		string accountnumber;
		double balance;
		public:
			
			account(){
				accountnumber="0000";
				balance=0;
			}
			account(string x,double y){
				accountnumber=x;
				balance=y;
			}
			void depositwithdrawal(){
				double x;
				double y;
				cout<<"Enter the amount for Deposit:";
				cin>>x;
				cout<<"The amount "<<x<<" was deposited"<<endl;
				cout<<"Enter the amount for Withdrawal:";
				cin>>y;
				if (y<=x){
					cout<<"The amount "<<y<<" was withdrawed"<<endl;
				}
				else
				cout<<"Insufficent Balance";
			}
			void disp(){
				cout<<"Account Number:"<<accountnumber<<endl;
				cout<<"Balance:"<<balance<<endl;
			
			}
			void set(string a,double b){
				
				accountnumber=a;
				balance=b;}
				string geta(){
					return accountnumber;
				}
				double getb(){
					return balance;
				}
			
};
class savingaccount:public account{
	private:
		double interestrate;
		public:
			
			savingaccount(){
				interestrate=0;
			}
			savingaccount(string a,double b,double c):account(a,b){
			
				interestrate=c;
			}
			void calc(){
				double interest;
				double interestrate;
				
			
				 interestrate/=100;
				
				double bala=getb();
				interest=getb()*interestrate;
				bala=interest+interestrate;
				set(geta(),bala);
				
			}
			void disp1(){
				string aa;
				double bb;
				aa=geta();
				bb=getb();
				cout<<"Account Number:"<<aa<<endl;
				cout<<"Balance:"<<bb<<endl;
				cout<<"Interest Rate:"<<interestrate<<endl;
				
				
			}
	
};
class checkingaccount:public account{
	private:
		double monthlyfee;
		public:
			checkingaccount(){
				monthlyfee=0;
			}
			checkingaccount(string g,double h,double m):account(g,h){
				monthlyfee=m;
			}
			void deduct(){
			double balan=getb();
				balan-=monthlyfee;
				set(geta(), balan);
			
			
			}
			
			
			
		void disp2(){string aa;
			double bb;
			aa=geta();
			bb=getb();
				cout<<"Account Number:"<<aa<<endl;
				cout<<"Balance:"<<bb<<endl;
				cout<<"Monthly fee of  " <<monthlyfee<<" after deduction "<<getb();
			}
};
int main(){ 
account a1("Ramish007",1000);
savingaccount s1("Ramish007",1000,10);
checkingaccount c1("Ramish007",1000,50);
a1.depositwithdrawal();
s1.calc();
c1.deduct();
a1.disp();
s1.disp1();
c1.disp2();






	

}

