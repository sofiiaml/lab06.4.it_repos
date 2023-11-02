#include <iostream>
using namespace std;

int CountPositiveElements(double* a, const int n) {
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            count++; 
        }
    }

    return count;
}

double SumAfterLast0(double* a, const int n) {
    double sum = 0;  

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 0) {
            break;  // Зупиняємо обчислення після першого нуля
        }
        sum += a[i];
    }

    return sum;
}

void ChangeArray(double* a, const int n) {
    int lessThanOne = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] <= 1.0) {
            double temp = a[i];
            a[i] = a[lessThanOne];
            a[lessThanOne] = temp;
            lessThanOne++;
        }
    }
}

int main() {
    int n;
    cout << "n= ";
    cin >> n;

    double* a = new double[n];

    cout << "n" << n << " =" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = CountPositiveElements(a, n);
    cout << "Amount of positive elements=" << count << endl;

    double sum= SumAfterLast0(a, n);
    cout << "Sum=" << sum << endl;

    ChangeArray(a, n);

    cout << "Changed array=" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    delete[] a;

    return 0;
}