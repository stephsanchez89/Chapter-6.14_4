// Steph's Lab 6.14_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

float DownPayment;
float Principal;
float InterestRate;
float MonthlyRate;
float NumberOfPayments;
float A;
float B;
float C;
float D;
float Payment;
float E;
float F;
float MonthlyPayments;



using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    cout << fixed << setprecision(2);
    
    cout << "Enter Principal: $";
    cin >> Principal;
    
    cout << "Enter Down Payment Amount: $";
    cin >> DownPayment;

    cout << "Enter Interest Rate: " ;
    cin >> InterestRate;  cout << "%";

    cout << "Enter  monthly payments: $";
    cin >> MonthlyPayments;

    cout << "Enter Number of Monthly Payments: ";
    cin >> NumberOfPayments;

    A = Principal - DownPayment;

    B = InterestRate / 12;

    C = 1 + B;

    F = -1 * NumberOfPayments;

    D =  pow(C,F);

       

    Payment = A * B / (1-D);

    cout << "Payment is: $" << Payment;

    return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
