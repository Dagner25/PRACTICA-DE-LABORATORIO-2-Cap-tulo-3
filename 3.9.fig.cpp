#include <iostream>
#include "ejemplo3.8"
using namespace std;

int main()
{
cout << "account1: " << account1.getName() << " balance is $"
<< ;
cout << "\naccount2: " << account2.getName() << " balance is $"
<< ;

cout << "\n\nEnter deposit amount for account1: "; // prompt
int depositAmount;
cin >> depositAmount; // obtain user input
cout << "adding " << depositAmount << " to account1 balance";
cout << "\n\naccount1: " << account1.getName() << " balance is $"
<< account1.getBalance();
cout << "\naccount2: " << account2.getName() << " balance is $"
<< account2.getBalance();
cout << "\n\nEnter deposit amount for account2: "; // prompt
cin >> depositAmount; // obtain user input
cout << "adding " << depositAmount << " to account2 balance";
cout << "\n\naccount1: " << account1.getName() << " balance is $"
<< account1.getBalance();
cout << "\naccount2: " << account2.getName() << " balance is $"
<< account2.getBalance() << endl;
}