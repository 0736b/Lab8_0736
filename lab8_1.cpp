#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double Find_Dokbia(double init_Money, double Dok_rate){
	double Dokbia = 0;
	Dokbia = init_Money*(Dok_rate/100);
	return Dokbia;
}

int main(){	
	int year = 1;
	double loan = 0, rate_year = 0, pay_year = 0;
	double PrevBalance, Interest, Total, Payment, NewBalance;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate_year;
	cout << "Enter amount you can pay per year: ";
	cin >> pay_year;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	cout << fixed << setprecision(2); 
	
	PrevBalance = loan;
	Payment = pay_year;

	while(NewBalance > 0){
	cout << setw(13) << left << year;     				// Printed Value EndOfYear
		cout << setw(13) << left << PrevBalance; 		// Printed Value PrevBalance
	Interest = Find_Dokbia(PrevBalance,rate_year);
	Total = PrevBalance + Interest;
												
		cout << setw(13) << left << Interest; 			// Printed Value Interest
		cout << setw(13) << left << Total; 				// Printed Value Total
	if(Total - Payment <=0){
		cout << setw(13) << left << Total; 	
	}													// Printed Value Payment
	else{
		cout << setw(13) << left << Payment; 	
		}		
	NewBalance = Total - Payment;
	PrevBalance = NewBalance;
	if(NewBalance <= 0 ) NewBalance = 0;
		cout << setw(13) << left << NewBalance;  		// Printed Value NewBalance
		cout << "\n";	
	year++;
}
	return 0;
}
