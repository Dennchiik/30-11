#include <iostream>
#include <algorithm>
#include <string>

int main() {
    const int size = 5;
    std::string surnames[size];

    std::cout << "Введите фамилии 5 студентов:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Фамилия " << i + 1 << ": ";
        std::cin >> surnames[i];
    }

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (surnames[j] > surnames[j + 1]) {
                std::swap(surnames[j], surnames[j + 1]);
            }
        }
    }

    std::cout << "\nОтсортированные фамилии студентов:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << i + 1 << ": " << surnames[i] << "\n";
    }

    return 0;
}
