#include<iostream>
using namespace std;
class Birth {
public:
    int dd, mm, yy;
    void show() {
        cout << "Enter day, month, year: ";
        cin >> dd >> mm >> yy;
        cout << dd << "-" << mm << "-" << yy << endl;
    }
};
class Student {
public:
    char name[20];
    Birth dob;
    char gender;
    void print() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter gender (M/F): ";
        cin >> gender;
        cout << "Date of birth: ";
        dob.show();
        cout << "Name = " << name << endl;
        cout << "Gender: " << gender << endl;
    }
};
int main() {
    Student s;
    s.print();
    return 0;
}
