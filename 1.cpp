/*An electricity board charges the following rates to domestic users to 
discourage large consumption of energy.
For the first 100 units: - 60 P per unit 
For the next 200 units: -80 P per unit 
Beyond 300 units: -90 P per unit
All users are charged a minimum of Rs 50 if the total amount is more than 
Rs 300 then an additional surcharge of 15% is added.
Implement a C++ program to read the names of users and number of units
consumed and display the charges with names*/
#include <iostream> 
#include <string>

using namespace std;

class ElectricityBill {
private:
    string name;
    int units;
    float bill;

public:
    void inputDetails() {
        cout << "Enter the name of the user: ";
        getline(cin, name);
        cout << "Enter the number of units consumed: ";
        cin >> units;
     
    }


    void calculateBill() {
        float total = 0.0;

        if (units <= 100) {
            total = units * 0.60;
        } else if (units <= 300) {
            total = (100 * 0.60) + ((units - 100) * 0.80);
        } else {
            total = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90); 
        }
        if (total < 50.0) {
            total = 50.0;
        }

        if (total > 300.0) {
            total += total * 0.15;
        }

        bill = total;
    }

    void displayBill() const {
        cout << "Name: " << name << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill: Rs " << bill << endl;
    }
};

int main() {
    ElectricityBill userBill;
    userBill.inputDetails();
    userBill.calculateBill();
    userBill.displayBill();

    return 0;
}
