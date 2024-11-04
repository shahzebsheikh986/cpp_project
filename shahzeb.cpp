#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "bitsat";
   cout<<a<<"\n";
    getline(cin, a);  // Reads input from the user and stores it in 'a'
    cout << "You entered: " << a << endl;

    return 0;
}

