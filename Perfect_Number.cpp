#include<iostream>
using namespace std;

class p {
public:
    void check() {
        int r;
        cout << "Enter a number: ";
        cin >> r;
        int sum = 0;
        for (int i = 1; i < r; i++) {
            if (r % i == 0) {
                sum += i;
            }
        }
        if (sum == r)
            cout << r << " is a perfect number." << endl;
        else
            cout << r << " is not a perfect number." << endl;
    }
};

int main() {
    p obj;
    obj.check();
    return 0;
}
