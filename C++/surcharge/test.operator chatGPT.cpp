#include <iostream>
 using namespace std;
class Complex {
public:
  // Constructor
  Complex(int real, int imag) : re(real), img(imag) {}

  // Method to show results
  void display() {
    cout << re << " + " << img << "i" << std::endl;
  }

  // Operator+ for adding two complex numbers
  Complex operator+(const Complex& other) {
    return Complex(re + other.re, img + other.img);
  }

  // Operator* for multiplying two complex numbers
  Complex operator*(const Complex& other) {
    return Complex(re * other.re - img * other.img,
                   re * other.img + img * other.re);
  }

  // Operator-= for subtracting a complex number from another
  void operator-=(const Complex& other) {
    re -= other.re;
    img -= other.img;
  }

private:
  int re; // Real part of the complex number
  int img; // Imaginary part of the complex number
};

int main() {
  // Create two complex numbers
  Complex num1(3, 4);
  Complex num2(1, 2);

  // Display the original numbers
  cout << "First complex number: ";
  num1.display();
  cout << "Second complex number: ";
  num2.display();

  // Add two complex numbers and display the result
  Complex sum = num1 + num2;
  cout << "Sum of two complex numbers: ";
  sum.display();

  // Multiply two complex numbers and display the result
  Complex product = num1 * num2;
  cout << "Product of two complex numbers: ";
  product.display();

  // Subtract the second complex number from the first and display the result
  num1 -= num2;
  cout << "Subtraction of second complex number from first: ";
  num1.display();

  return 0;
}
