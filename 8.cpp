/*Anna is a contender for valedictorian of her high school. She wants to know
how many students (if any) have scored higher than her in the exams given
during this semester.
Create a class named Student with the following specifications:
 An instance variable named scores holds a student's 5 exam scores.
 A void input () function reads 5 integers and saves them to scores.
 An int total() function that returns the sum of the
student's scores*/
#include <iostream>
using namespace std;

class Student {
private:
    int scores[5];

public:
    void input() {
        cout << "Enter 5 exam scores: ";
        for (int i = 0; i < 5; ++i) {
            cin >> scores[i];
        }
    }

    int total() {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    Student anna; 

    anna.input();

    int score = anna.total();
    cout << "Anna's total score: " << score << endl;
    
    Student otherStudent; 

    otherStudent.input();

    int osts = otherStudent.total();
    cout << "Other student's total score: " << osts << endl;

    if (osts > score) {
        cout << "Other student scored higher ." << endl;
    } else if (osts < score) {
        cout <<"Anna scored higher ." << endl;
    } else {
        cout <<"Anna and the other student have the same score." << endl;
    }

    return 0;
}
