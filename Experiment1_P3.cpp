#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	int d1, d2;
	double nb, p,aveDB, ir;
	
	cout << "Enter your credit card's unpaid balance interest" << endl;
	
    cout << "Enter your current net balance: ";
	cin >> nb;
	
    cout << "Enter the total of payment made: ";
	cin >> p;
	
    cout << "Enter the number of days in the billing cycle: ";
	cin >> d1;
	
    cout << "Enter the number of days payment is made before billing cycle: ";
	cin >> d2;
	cout << endl;
	
	aveDB = (nb*d1)-(p*d2)/d1;
	ir = (aveDB * 0.0097);
	
	cout << "your current credit card's unpaid balance interest is: " << setprecision(3) << fixed << ir << endl;
	
	
	
	getch();
	return 0;
}
