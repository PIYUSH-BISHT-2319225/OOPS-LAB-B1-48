/*Define a class Hotel in C++ with the following specifications
Private members
• Rno Data member to store room number
• Name Data member to store customer name
• Tariff Data member to store per day charges
• NOD Data member to store number of days of stay
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the 
value of days* Tariff >10000, 
then total amount is 1.05* days*Tariff. 
Public members
• Checkin() Function to enter the content Rno, Name, Tariff and NOD
• Checkout() Function to display Rno, Name, Tariff, NOD 
and Amount (amount to be displayed by calling function) CALC()*/
#include <iostream>
#include <string>
using namespace std;

class Hotel {
private:
    int Rno;             
    string Name;    
    float Tariff;       
    int NOD;             

    
    float CALC() const {
        float amount = NOD * Tariff;
        if (amount > 10000) {
            return 1.05 * amount;
        } else {
            return amount;
        }
    }

public:
    
    void Checkin() {
        cout << "Enter room number: ";
        cin >> Rno;

        cout << "Enter customer name: ";
        getline(cin, Name);

        cout << "Enter tariff per day: ";
        cin >> Tariff;

        cout << "Enter number of days of stay: ";
        cin >> NOD;
    }
    void Checkout() const {
        cout << "Room Number: " << Rno << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Tariff per day: " << Tariff << endl;
        cout << "Number of Days of Stay: " << NOD << endl;
        cout << "Amount: " << CALC() << endl;
    }
};
int main() {
    Hotel hotel;
    hotel.Checkin();
    hotel.Checkout();
    return 0;
}
