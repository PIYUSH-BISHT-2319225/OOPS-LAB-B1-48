#include <stdio.h>
using namespace std;
class SavingsAccount {
private:
    static float annualInterestRate;
    float savingsBalance;

public:
    SavingsAccount(float balance) {
        savingsBalance = balance;
    }

    void calculateMonthlyInterest() {
        float monthlyInterest = savingsBalance * (annualInterestRate / 12);
        savingsBalance += monthlyInterest;
    }

    static void modifyInterestRate(float newRate) {
        annualInterestRate = newRate;
    }

    float getBalance() const{
        return savingsBalance;
    }
};

float SavingsAccount::annualInterestRate = 0.0;

int main() {
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);
    printf("Saver 1 : %f\n", saver1.getBalance());
    printf("Saver 2: %f\n", saver2.getBalance());

    SavingsAccount::modifyInterestRate(0.04);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    printf("Saver 1 : %f\n", saver1.getBalance());
    printf("Saver 2 : %f\n", saver2.getBalance());

    SavingsAccount::modifyInterestRate(0.05);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    printf("Saver 1 : %f\n", saver1.getBalance());
    printf("Saver 2 : %f\n", saver2.getBalance());

    return 0;
}
