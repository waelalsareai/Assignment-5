#include <iostream>
#include <iomanip>
using namespace std;

int main() {
cout << fixed << setprecision(2);
double balance, payment, apr;
cout << "Enter your balance: ";
cin >> balance;

cout << "Enter your monthly payment: ";
cin >> payment;
cout << "Enter the anual interest rate (APR) as a percentage: ";
cin >> apr;
double monthlyRate = (apr / 100) / 12;
cout << "\nMonth\tInt\tPay\tBalance\n";
int month = 0;
cout << month << "\t" << 0 << "\t" << 0 << "\t" << balance << endl;
while (balance > 0) {
  month++;
  double interest = balance * monthlyRate;
  balance = balance + interest - payment;

  if (balance < 0)
     balance = 0;

  cout << month << "\t" << interest << "\t" << payment << "\t" << balance << endl;
}
}

