/* cashRegister
*  cashRegister.c
*  Ivy Leano
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int loonies;
	int quarters;
	int dimes;
	int nickels;
	double amount;
	double balance;
	double GST;
	double total;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	// Calculates GST
	GST = amount * 0.13;
	printf("GST: %.2lf\n", GST);

	// Calculates total, the GST + amount
	total = (GST + amount);
	printf("Balance owing: $%.2lf\n", total);

	// Calculates loonies required and balance owing
	loonies = total;
	balance = total - loonies;

	printf("Loonies required: %d, balance owing: $%1.2lf\n", loonies, balance);

	// Calculates quarters required and balance owing
	quarters = balance / 0.25;
	balance = balance - (quarters * 0.25);

	printf("Quarters required: %d, balance owing $%1.2lf\n", quarters, balance);

	// Calculates dimes required and balance owing
	dimes = balance / 0.10;
	balance = balance - (dimes * 0.10);

	printf("Dimes required: %d, balance owing $%1.2lf\n", dimes, balance);

	// Calculates nickels required and final balance owing
	nickels = balance / 0.05;
	balance = balance - (nickels * 0.05);

	printf("Nickels required: %d, balance owing $%1.2lf\n", nickels, balance);

	return 0;
}




