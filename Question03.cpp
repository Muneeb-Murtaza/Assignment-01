

  #include <iostream>
using namespace std;

int main() {
    int day, penny = 1,salary = 0;
    int total;

    cout << "Enter the number of days: ";
    cin >> day;

    while (day < 1) {
        cout << "Invalid! Enter a positive number of days: ";
        cin >> day;
    }

    for (int i = 1; i <= day; i++) {
        salary += penny;   
        penny *= 2;        
    cout << "Total salary after " << i << " day = " << salary << " pennies." << endl;
        
    }
total=salary/100.0;
cout<<" total salary in Dollars is $"<<total<<" "<<endl;
    return 0;
}
