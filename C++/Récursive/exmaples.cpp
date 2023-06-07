#include <iostream>
  using namespace std;

 int somme(int n){
    return (n == 0)?0:n + somme(n-1);
 }

 void compter(int i){
    if(i <= 0){
        cout << i;
     compter(i+1);
    }
 }
 
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int binomialCoefficient(int n, int p) {
    if (p == 0 || p == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, p - 1) + binomialCoefficient(n - 1, p);
    }
}

int main() {
    int n, p;
    std::cout << "Enter an integer (for factorial): ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;

    std::cout << "Enter the values of n and p (for binomial coefficient): ";
    std::cin >> n >> p;
    std::cout << "C(" << n << "," << p << ") = " << binomialCoefficient(n, p) << std::endl;

    std::cout << "Enter the values of a and b (for (a+b)^n calculation): ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "(" << a << "+" << b << ")^" << n << " = ";

    for (int i = 0; i <= n; ++i) {
        int coefficient = binomialCoefficient(n, i);
        if (coefficient != 1) {
            std::cout << coefficient;
        }
        if (i != 0) {
            std::cout << "*";
        }
        if (a != 1 || i == n) {
            std::cout << a;
            if (i != n) {
                std::cout << "^" << (n - i);
            }
        }
        if (b != 0 && i != n) {
            std::cout << "*";
            if (b != 1) {
                std::cout << b;
            }
            std::cout << "^" << i;
        }
        if (i != n) {
            std::cout << "+";
        }
    }
    std::cout << std::endl;

    return 0;
}
