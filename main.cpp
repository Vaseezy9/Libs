#include <iostream>
#include "matrix.h"

int main() {
    math::Matrix A(2, 2);
    math::Matrix B(2, 2);
    std::cout << "Enter matrix A:\\n";
    std::cin >> A;
    std::cout << "Enter matrix B:\\n";
    std::cin >> B;
    math::Matrix C = A + B;
    std::cout << "Matrix A + B:\\n" << C << std::endl;
    C = A - B;
    std::cout << "Matrix A - B:\\n" << C << std::endl;
    C = A * B;
    std::cout << "Matrix A * B:\\n" << C << std::endl;
    return 0;
}
}
