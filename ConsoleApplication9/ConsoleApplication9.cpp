#include <iostream>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Факториал " << i << " = " << factorial(i) << std::endl;
    }

    return 0;
}
