#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string correctEmail = "abc@gamil.com";
    string correctPassword = "123";
    string email, password;

    
    cout << "Enter your email: ";
    cin >> email;

    
    cout << "Enter your password: ";
    cin >> password;

    
    if (email == correctEmail && password == correctPassword) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid email or password." << endl;
    }

    return 0;
}
