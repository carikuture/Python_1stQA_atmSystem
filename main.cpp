//PYTHON MAGADIA ATM System [Practical Exam]
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //start interface
    char login;
    string userId;
    string passWord;

    cout << endl << "===============Welcome to Kopii's ATM Machine!===============" << endl;

    //main menu
    do {
        cout << endl << "Select an option from the menu below: " << endl;
        cout << "L : Login" << endl << "C : Create New Account" << endl << "Q : Quit" << endl;
        cout << endl << "> ";
        cin >> login;

            if (login == 'L' || login == 'l'){
                cout << "Enter User ID:   ";
                cin >> userId;
                cout << "Enter Password:  ";
                cin >> passWord;
                cout << "----LOGIN FAILED----" << endl;
            } else if (login == 'Q' || login == 'q') {
                cout << endl << "========Thank you for using Kopii's ATM Machine!========" << endl;
                return 0;
            } else if (login == 'C' || login == 'c') {
                break;
            } else
                cout << "----ERROR. TRY AGAIN.----" << endl;

    } while (login != 'C' || login != 'C');

    //creating an account
        string un;
        string newpass;
        string confpass;
            cout << "Enter new User ID:   ";
            cin >> un;
            cout << "Enter new Password:   ";
            cin >> newpass;
            cout << "Confirm new Password: ";
            cin >> confpass;

            if (newpass == confpass) {
                cout << endl << "Your account has been registered." << endl;
                cout << "================================" << endl;
            } else if (newpass != confpass) {
                cout << endl << "Authentication Failed! Please try again." << endl;
                return 0;
            }

    //main menu pt2 (after account creation)
    cout << endl << "Please select an option from the menu below: " << endl;
    cout << "L : Login" << endl << "C : Create New Account" << endl << "Q : Quit" << endl;
    cout << endl << "> ";
    cin >> login;

    //logging in new account
    switch (login)
        {
            case 'L':
            case 'l':
                cout << "Enter User ID:   ";
                cin >> userId;
                    if (userId == un) {
                        cout << "Enter Password:  ";
                        cin >> passWord;
                            if (passWord == newpass) {
                                cout << "----Access Granted!----" << endl;
                                break;
                            } else
                                cout << endl << "----Incorrect. Exiting Now...----" << endl;
                                return 0;
                    } else
                        cout << endl << "----Incorrect. Exiting Now...----" << endl;
                        return 0;
            case 'C':
            case 'c':
                cout << "----Command unavailable. Please try again later.----";
                return 0;
            case 'Q':
            case 'q':
                cout << endl << "========Thank you for using Kopii's ATM Machine!========" << endl;
                return 0;
            default:
                cout << "----ERROR. TRY AGAIN.----";
                return 0;
        }

    //atm dashboard
    cout << endl << "========Welcome to the ATM Dashboard!========" << endl;


    char input;
    double deposit = 0;
    double withdraw = 0;
    double balance = 0;

    //atm menuueueuueuu
    do {
        cout << endl << endl << "What would you like to do?" << endl;
        cout << "D : Deposit Money" << endl << "W : Withdraw Money" << endl << "B : Check Balance" << endl << "Q : Quit" << endl;
        cout << endl << "> ";
        cin >> input;

            if (input == 'D' || input == 'd'){
                cout << "Amount of deposit:    $";
                cin >> deposit;
                balance = balance + deposit;
                cout << "Success!" << endl;
                cout << "Current balance is:   $" << balance << endl;
            } else if (input == 'W' || input == 'w') {
                cout << "Amount of withdrawal: $";
                cin >> withdraw;
                if (balance < withdraw){
                    cout << "Insufficient balance!" << endl;
                    cout << "-----------------";
                } else if (balance >= withdraw) {
                    balance = balance - withdraw;
                    cout << "Success!" << endl;
                    cout << "Current balance is:   $" << balance << endl;
                }
            } else if (input == 'B' || input == 'b') {
                cout << "Current balance is:      $";
                cout << balance;
            } else if (input == 'Q' || input == 'q') {
                break;
            } else
                cout << "----ERROR. TRY AGAIN.----" << endl;
    } while (balance != 'q' || balance != 'Q');

        cout << endl << "===============Thank you for using Kopii's ATM Machine!===============" << endl;

    return 0;
}


