#include<iostream>
using namespace std;

int main() {
    int x, y;
    char op;
    char choice;

    do {
        cout << "Enter x values: ";
        cin >> x;

        cout << "Enter y values: ";
        cin >> y;

        cout << "Select the operator (+, -, *, /): ";
        cin >> op;

        switch(op) {
            case '+':
                cout << "Result: " << x + y << endl;
                break;
            case '-':
                cout << "Result: " << x - y << endl;
                break;
            case '*':
                cout << "Result: " << x * y << endl;
                break;
            case '/':
                if (y == 0)
                    cout << "Error: Division by zero" << endl;
                else
                    cout << "Result: " << (float)x / y << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "Do you want to calculate again? (y/n): ";
        cin >> choice;

    } while(choice == 'y');

    cout << "Calculator Ended." << endl;

    return 0;
}


