#include <iostream>
#include <string>
using namespace std;

class student {
    static int count; // Declaration of static variable
    int rno;
    string name;
    string clas;
    string div;

public:
    student() {
        rno = 20;
        name = "Yash";
        clas = "SE";
        div = "A"; // Removed newline character
        count++; // Increment count
    }

    student(const student &s) { // Changed to const reference
        rno = s.rno;
        name = s.name;
        clas = s.clas;
        div = s.div;
    }

    void read() {
        cout << "\nEnter Roll number: ";
        cin >> rno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter class: ";
        cin >> clas;
        cout << "Enter div: ";
        cin >> div;
    }

    void display() {
        cout << "\nRoll number: " << rno;
        cout << "\nName of student: " << name;
        cout << "\nClass: " << clas;
        cout << "\nDivision: " << div;
    }

    static void show() {
        cout << "\ncount=" << count;
    }
};

// Initialize static variable
int student::count = 0;

int main() {
    student s1;
    s1.display();

    student s2(s1);
    s2.display();

    student s3;
    s3.read();
    s3.display();

    int n, i;
    cout << "\nEnter number of students: ";
    cin >> n;
    cout << "Entered students: " << n;

    // Create a dynamic array of student pointers
    student** ptr = new student*[n]; // Allocate memory for n student pointers

    for (i = 0; i < n; i++) {
        ptr[i] = new student(); // Allocate memory for each student
        ptr[i]->read();
    }

    for (i = 0; i < n; i++) {
        ptr[i]->display();
        delete ptr[i]; // Free allocated memory for each student
    }

    delete[] ptr; // Free the array of pointers

    student::show();

    return 0;
}
