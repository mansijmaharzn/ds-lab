// WAP to find the power using recursive function
#include<iostream>
using namespace std;

class powerclass {
    public:
        double power(int x, int n) {
            if (n < 0) {
                return power(x, n+1)/x;
            } else {
                if (n==0)
                    return 1;
                else
                    return x * power(x, n-1);
            }
        }
};

int main() {
    powerclass pc;

    cout << pc.power(2, -5);

    return 0;
}