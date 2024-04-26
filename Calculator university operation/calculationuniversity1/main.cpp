#include <iostream>
using namespace std;
int main()
{
    int  a;
    int b;

    cout << "Please enter the first number:";
    cin >> a;

    cout << "Please enter the second number:";
    cin >> b;

    cout << endl;

    cout <<"Sum:" << a + b;
    cout << endl;
    cout <<"product:"<< a * b;
    cout << endl;
    cout <<"Subtraction:" << a - b;
    cout << endl;
    cout << "Division:" <<(float) a/b;
    cout << endl;
    cout << "Reminder:" << a % b;
}
