
#include <iostream>
#include <random>
using namespace std;

class fraction {
private:
    int a, b;
public:
    int GetA() {
        return a;
    }
    int GetB() {
        return b;
    }
    void SetA(int _a) {
        a = _a;
    }
    void SetB(int _b) {
        b = _b;
    }

    void Print() {
        if (b != 0) {
            cout << "result a/b -- " << a / b << endl;
        }
        else {
            cout << "error" << endl;
        }
    }

    void Input(int a2, int b2) {
        SetA(a2);
        SetB(b2);
    }

    void InputRand() {
        srand(time(0));
        SetA(1 + rand() % (100 - 1 + 1));
        SetB(1 + rand() % (100 - 1 + 1));
    }
};

int main()
{
    fraction a2;
    a2.Input(4, 2);
    a2.Print();

    fraction b2;
    b2.InputRand();
    b2.Print();
}