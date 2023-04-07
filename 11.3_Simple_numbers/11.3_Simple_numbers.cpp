#include <iostream>


/* Поиск простого числа */

//Создаем функцию подсчета простых числел
bool is_prime(int n) {
    if (n == 1) return false; // если число буде 1

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // если делитель был найден
    }
    return true;
}

int main() {
    int a, b;
    std::cout << "Range" << '\n';
    std::cin >> a >> b;

    int count = 0;
    std::cout << "Total prime numbers from " << a << " to " << b << ":" << '\n';
    for (int i = a; i <= b; i++) {
        if (is_prime(i)) {
            std::cout << i << '\n'; // Total prime numbers
            count++; // колличество постых чисел
        }
    }
    std::cout << "All count " << count << '\n';
}