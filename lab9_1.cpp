#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan , rate , pay ;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> pay ;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	double interest , PrevBalance , total , newBalance ;
	PrevBalance = loan ;
	interest = PrevBalance*(rate/100.00) ;
	total = PrevBalance + interest ;
	newBalance = total - pay ;
	

	if(total <= pay){
		
		pay = total ;
		
		cout << fixed << setprecision(2);
		cout << setw(13) << left << 1 ;
		cout << setw(13) << left << PrevBalance ;
		cout << setw(13) << left << interest ;
		cout << setw(13) << left << total ;
		cout << setw(13) << left << pay ;
		newBalance = pay - total ;
		cout << setw(13) << left << newBalance << endl ;

	}else{
		
		int i = 1 ;

		do{
			cout << fixed << setprecision(2);
			cout << setw(13) << left << i ;
			cout << setw(13) << left << PrevBalance ;
			cout << setw(13) << left << interest ;
			cout << setw(13) << left << total ;
			cout << setw(13) << left << pay ;
			cout << setw(13) << left << newBalance << endl ;
			i++ ;

			PrevBalance = newBalance ;
			interest = PrevBalance*(rate/100) ;
			total = PrevBalance + interest ;
			newBalance = total - pay ;
			if(newBalance < 0){
				break ;
			}
		}while(true) ;

		pay = total ;
		newBalance = pay - total ;

		cout << setw(13) << left << i ;
		cout << setw(13) << left << PrevBalance ;
		cout << setw(13) << left << interest ;
		cout << setw(13) << left << pay ;
		cout << setw(13) << left << pay ;
		cout << setw(13) << left << newBalance ;

	}


}