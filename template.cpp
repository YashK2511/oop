#include <iostream>

using namespace std;

template <class T>
void selection(T a[20], int n) {
    int i, j, loc;
    T min, temp;

    for (i = 0; i < n; i++) {
        min = a[i];
        loc = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                loc = j;
            }
        }

        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }

    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main() {
    int a[20];
    float b[20];
    int n1, n2;

    cout << "\nEnter the size of int array: ";
    cin >> n1;

    cout << "\nEnter the size of float array: ";
    cin >> n2;

    cout << "\nEnter the elements of int array: ";
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "\nEnter the elements of float array: ";
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    cout << "Sorted int array: ";
    selection(a, n1);

    cout << "Sorted float array: ";
    selection(b, n2); // Added missing semicolon

    return 0;
}
