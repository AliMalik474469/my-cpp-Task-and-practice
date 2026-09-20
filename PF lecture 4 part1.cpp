
#include <iostream>
using namespace std;

int main() {
    string name;
    int overtime, absent;
    int payment;

    cout << "Enter employee name: ";
    cin>>name;

    cout << "Enter overtime hours: ";
    cin >> overtime;

    cout << "Enter absent hours: ";
    cin >> absent;
    
    payment = (overtime * 100) - (absent * 50);

    cout << "\nEmployee Name: " << name << endl;
    cout << "Bonus Payment: Rs. " << payment << endl;

    return 0;
    }