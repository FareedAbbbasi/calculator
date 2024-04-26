//Welcome to calculator program
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int choice;
    char ch;
    do {

        // Display the calculator menu
        cout << "1. Add:" << endl;
        cout << "2. Subtract:" << endl;
        cout << "3. Multiply:" << endl;
        cout << "4. Divide:" << endl;
        cout << "5.Modulus:" << endl;
        cout << endl;

        // Input the desired choice
        cout << "Please enter your choice:";
        cin >> choice;

        cout << endl;

        // Input two numbers
        cout << "Please enter the first number:";
        cin >> num1;
        cout << "Please enter the second number:";
        cin >> num2;

        cout << endl;

        /*The switch statement below helps perform different arithmetic
         operations based on the value of 'choice'*/
        switch (choice){

            case 1:
                //code to execute addition when 'choice' is '1'
                cout << "Addition of the two numbers is:" << num1 + num2;
                break;
            case 2:
                //code to execute subtraction when 'choice' is '2'
                cout << "Subtraction of two numbers is:" << num1 - num2;
                break;

            case 3:
                //code to execute Multiplication  when 'choice' is '3'
                cout << "Multiplication of the two numbers:" << num1 * num2;
                break;

            case 4:
                //code to execute Division when 'choice' is '4'
                cout << "Division of the two number is:" << (float) num1 /num2;
                break;

            case 5:
                //code to execute Modulus when 'choice' is '5'
                cout << "Modulus of the two number is:" << num1 % num2;
                break;
            default: cout << "\n Enter a valid choice. \n";
                continue;
        }
        // Ask if the user wants to continue
        cout << "\nDo you want to continue or not?(y/n):";
        cin >> ch;
    }
    //check the user went to perform a calculation to continue or not
    while (ch != 'n');
}
