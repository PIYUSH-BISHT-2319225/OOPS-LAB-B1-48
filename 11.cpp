#include <iostream>
#include <conio.h>

class TollBooth {
private:
    unsigned int carCount;
    double cashTotal;

public:
    TollBooth() : carCount(0), cashTotal(0.0) {}

    void payingCar() {
        carCount++;
        cashTotal += 0.5;
    }

    void nonPayCar() {
        carCount++;
    }

    void display() const {
        std::cout << "Total cars: " << carCount << std::endl;
        std::cout << "Total cash: $" << cashTotal << std::endl;
    }
};

int main() {
    TollBooth tollBooth;
    char ch;

    while (true) {
        ch = _getch();
        if (ch == 27) {
            tollBooth.display();
            break;
        }
        if (ch == 'p' || ch == 'P') {
            tollBooth.payingCar();
        }
        if (ch == 'n' || ch == 'N') {
            tollBooth.nonPayCar();
        }
    }

    return 0;
}










