// Hard
// 1)Implement Polymorphism for Banking Transactions
// Objective
// Design a C++ program to simulate a banking system using polymorphism. Create a base class Account with a virtual method calculateInterest(). Use the derived classes SavingsAccount and CurrentAccount to implement specific interest calculation logic:
// -	SavingsAccount: Interest = Balance × Rate × Time.
// -	CurrentAccount: No interest, but includes a maintenance fee deduction.

// Input Format
// 1.	Account Type (1 for Savings, 2 for Current).
// 2.	Account Balance (integer).
// 3.	For Savings Account: Interest Rate (as a percentage) and Time (in years).
// 4.	For Current Account: Monthly Maintenance Fee.
// Constraints
// ●	Account type: 1 ≤ type ≤ 2 .
// ●	Balance: 1000 ≤ balance ≤ 1,000,000 .
// ●	Interest Rate: 1 ≤ rate ≤ 15.
// ●	Time: 1 ≤ time ≤ 10 .
// ●	Maintenance Fee: 50 ≤ fee ≤ 500 .

// Test Cases:
// Example 1: Savings Account Interest
// Input:
// Account Type: 1  
// Balance: 10000  
// Interest Rate: 5  
// Time: 3  
// Output:
// Savings Account Interest: 1500


