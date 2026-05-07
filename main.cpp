#include<iostream>
int main() {
    int i[]= {1, 1};
    for (std::cin >> i[0];  i[0] > 1; i[0]--) {std::cout << (i[1] *= i[0]) << "\n";}
}