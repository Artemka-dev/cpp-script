#include <iostream>

int getVariant(std::string name, int variants) {
    char symbol = name[0];
    return static_cast<int>(symbol) % variants;
}

int main() {
    std::string name;
    std::cout << "Enter yout surname: ";
    std::cin >> name;

    int count;
    std::cout << "Enter quantity of variants: ";
    std::cin >> count;

    std::cout << getVariant(name, count) << std::endl;
    return 0;
}
