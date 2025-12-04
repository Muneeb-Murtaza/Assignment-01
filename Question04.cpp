#include <iostream>
using namespace std;

int main() {
    double rate, balance;
    int months;

    double totalDep = 0;
    double totalWith = 0;
    double totalInt = 0;

          double monthly;
        double interest;

    cout << "Annual interest rate (0.03): ";
    cin >> rate;

    cout << "Starting balance: ";
    cin >> balance;

    cout << "Months active: ";
    cin >> months;

    for (int i = 1; i <= months; i++) {

        double dep, with;

        cout << "\nMonth " << i << endl;

        
        cout << "Deposit: ";
        cin >> dep;
        while (dep < 0) {
            cout << "Can't be negative. Deposit again: ";
            cin >> dep;
        }
        balance =balance + dep;
        totalDep =totalDep + dep;

       
        cout << "Withdraw: ";
        cin >> with;
        while (with < 0) {
            cout << "Can't be negative. Withdraw again: ";
            cin >> with;
        }
        balance =balance - with;
        totalWith =totalWith+ with;

        
         monthly = rate / 12;
        interest = balance * monthly;

        balance =balance+interest;
        totalInt= totalint+interest;
    }
    cout << "Ending balance: " << balance << endl;
    cout << "Total deposits: " << totalDep << endl;
    cout << "Total withdrawals: " << totalWith << endl;
    cout << "Total interest: " << totalInt << endl;

    return 0;
}
