#include <iostream>

using namespace std;

int romanToNum(string roman);

void calculator();

int main() {
    calculator();
    // cout << romanToNum("CM") << endl;
}

void calculator() {
    int ai, bi;
    string a, b;
    cout << "Enter the first roman numeral: ";
    cin >> a;
    ai = romanToNum(a);

    cout << "Enter the second roman numeral: ";
    cin >> b;
    bi = romanToNum(b);

    cout << "Sum is: " << ai + bi << endl;
    cout << "Difference is: " << ai - bi << endl;
    cout << "Product is: " << ai * bi << endl;
    cout << "Quotient is: " << float(ai / float(bi)) << endl;
}

int romanToNum(string roman) {
    int sum = 0;
    char tmp;

    for (int i = 0; i < roman.size(); i++) {
        tmp = roman[i];

        if (tmp == 'I') {
            if (i != roman.size() - 1 && roman[i + 1] == 'V' ||
                roman[i + 1] == 'X') {
                sum -= 1;
            }
            else
                sum += 1;
        }
        else if (tmp == 'V') {
            sum += 5;
        }
        else if (tmp == 'X') {
            if (i != roman.size() - 1 && roman[i + 1] == 'L' ||
                roman[i + 1] == 'C') {
                sum -= 10;
            }
            else
                sum += 10;
        }
        else if (tmp == 'L') {
            sum += 50;
        }
        else if (tmp == 'C') {
            if (i != roman.size() - 1 && roman[i + 1] == 'D' ||
                roman[i + 1] == 'M') {
                sum -= 100;
            }
            else
                sum += 100;
        }
        else if (tmp == 'D') {
            sum += 500;
        }
        else if (tmp == 'M') {
            sum += 1000;
        }
    }
    return sum;
}
