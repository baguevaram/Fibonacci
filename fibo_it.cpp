#include <iostream>
#include <iomanip>
using namespace std;

void fibonacci(unsigned int n);

int main() {
    int n = 93;
    fibonacci(n);

    return 0;
}

void fibonacci(unsigned int n) {

    //n_minus_1 represents what's supposed to be F(n-1)
    //n_minus_2 represents what's supposed to be F(n-2)
    //sum represents F(n) which equals F(n-1)+F(n-2)
    unsigned long long n_minus_1 = 0, n_minus_2 = 1;
    char sumCh;
    unsigned char sumUCh;
    short sumSh;
    unsigned short sumUSh;
    int sumInt;
    unsigned int sumUInt;
    long sumL;
    unsigned long sumUL;
    long long sumLL;
    unsigned long long sumULL;

    switch (n) {
        case 0:
            sumCh = 0;
            sumUCh = 0;
            sumSh = 0;
            sumUSh = 0;
            sumInt = 0;
            sumUInt = 0;
            sumL = 0;
            sumUL = 0;
            sumLL = 0;
            sumULL = 0;

        case 1:
            sumCh = 1;
            sumUCh = 1;
            sumSh = 1;
            sumUSh = 1;
            sumInt = 1;
            sumUInt = 1;
            sumL = 1;
            sumUL = 1;
            sumLL = 1;
            sumULL = 1;
            //otherwise the sum (i.e F(n)) is equal to (n_minus_1)+(n_minus_2) (i.e F(n-1)+F(n-2)
            //the counter keeps on moving the variables areound 'n' times
            //so that on each time F(n-2) becomes equal to F(n-1) and F(n-1) becomes equal to F(n)
            //and F(n) is reevaluated each time in the loop
        default:
            for (int counter = 0; counter < n; counter++) {
                sumCh = n_minus_1 + n_minus_2;
                sumUCh = n_minus_1 + n_minus_2;
                sumSh = n_minus_1 + n_minus_2;
                sumUSh = n_minus_1 + n_minus_2;
                sumInt = n_minus_1 + n_minus_2;
                sumUInt = n_minus_1 + n_minus_2;
                sumL = n_minus_1 + n_minus_2;
                sumUL = n_minus_1 + n_minus_2;
                sumLL = n_minus_1 + n_minus_2;
                sumULL = n_minus_1 + n_minus_2;
                n_minus_2 = n_minus_1;
                n_minus_1 = sumULL;
            }
    }
    cout << "The fibonacci number (char) is " << (int)sumCh << endl;
    //cout << "Overflow in n=12" << endl;
    cout << "The fibonacci number (unsigned char) is " << (int)sumUCh << endl;
    //cout << "Overflow in n=14" << endl;
    cout << "The fibonacci number (short) is " << sumSh << endl;
    //cout << "Overflow in n=24" << endl;
    cout << "The fibonacci number (unsigned short) is " << sumUSh << endl;
//    cout << "Overflow in n=25" << endl;
    cout << "The fibonacci number (int) is " << sumInt << endl;
//    cout << "Overflow in n=47" << endl;
    cout << "The fibonacci number (unsigned int) is " << sumUInt << endl;
//    cout << "Overflow in n=48" << endl;
    cout << "The fibonacci number (long) is " << sumL << endl;
//    cout << "Overflow (NetBeans) in n=47" << endl;
//    cout << "Overflow (Ideone) in n=93" << endl;
    cout << "The fibonacci number (unsigned long) is " << sumUL << endl;
//    cout << "Overflow (NetBeans) in n=47" << endl;
//    cout << "Overflow (Ideone) in n=94" << endl;
    cout << "The fibonacci number (long long) is " << sumLL << endl;
//    cout << "Overflow in n=93" << endl;
    cout << "The fibonacci number (unsigned long long) is " << sumULL << endl;
//    cout << "Overflow in n=94" << endl;
}