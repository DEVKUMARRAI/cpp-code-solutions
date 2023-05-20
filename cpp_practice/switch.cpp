#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char symbol;
    cout << "Enter the 1st Number:" << endl;
    cin >> a;
    cout << "Enter the 2nd Number: " << endl;
    cin >> b;
    while (symbol != 'e')
    {
        cout << "Enter the operation " << endl;
        cout << "Press 'e' to exit :" << endl;
        cin >> symbol;
        switch (symbol)
        {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case 'e':
            cout << "operatio  terminated "<< endl;
            break;
        default:
            cout << "Still learning More Operations";
            break;
        }
    }
}