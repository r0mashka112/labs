#include <iostream>

using namespace std;

void task1() {
    cout << "Enter number of rows: ";
    int n; cin >> n;
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) { res *= i; }
    return res;
}

void task2() {
    cout << "Enter k and n: ";
    int k, n; cin >> k >> n;
    long long p = 1;
    for (int i = n - k + 1; i <= n; i++) {p *= i;}
    cout << p / fact(k) << endl;
}

void task3() {
    double r = 0.0, k = 0.0;
    while (true) {
        cout << "Enter number, 0 - exit: ";
        int n; cin >> n;
        if (n == 0) { cout << r / k << endl; break; }
        else { r += n; k++; }
    }
}

int main() {
    while (true) {
        cout << "Menu" << endl;
        cout << "1 - Triangle\n" << "2 - Binomial coefficients\n" << "3 - Average number\n" << "4 - exit\n";
        cout << "Choice category: ";
        short choice; cin >> choice;
        switch (choice) {
        case 1: {task1(); break; }
        case 2: {task2(); break; }
        case 3: {task3(); break; }
        case 4: {return 0; }
        default: {cout << "Unknown value\n"; }
        }
    }
}