# BankAccountSystem
Design a class BankAccount that manages bank accounts.

Problem Statement: Design a class BankAccount that manages bank accounts and supports: 
1. Tracking the number of accounts: Use a static data member to keep count.
2. Deposit and Withdrawal: Implement methods to deposit and withdraw money.
3. Account Closure: Use a destructor to update the account count when an account is closed.
Hints : Steps to Approach:
1. Define the BankAccount class: Include private data members for balance and a static data member account Count.
2. Constructor: Initialize the balance and increment the account acCount.
3. deposit() Method: Add the deposit amount to the balance.
4. withdraw() Method: Subtract the withdrawal amount from the balance, ensuring it doesn’t go negative.
5. Destructor: Decrement the accountCount when an object is destroyed.
6. In the main function: Create multiple BankAccount objects and simulate transactions. Display the total number of accounts.
