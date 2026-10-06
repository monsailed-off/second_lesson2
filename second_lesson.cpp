#include <iostream>
#include <locale>
        // Функции для наших задач
// функция бля обьёма
void searchV() {
    int first_cat;
    int second_cat;
    int third_cat;
    // Назначение чисел
    std::cout << "Enter first num: " << std::endl;
    std::cin >> first_cat;
    std::cout << "Second: " << std::endl;
    std::cin >> second_cat;
    std::cout << "Third: " << std::endl;
    std::cin >> third_cat;
    //Вычисляем обьём и сразу выводим
    std::cout << "Sum: " << first_cat * second_cat * third_cat << std::endl;
}
// ищем произвидение abc
void multiply() {
    int first_num;
    int second_num;
    int third_num;
    // Назначение чисел
    std::cout << "Enter first num: " << std::endl;
    std::cin >> first_num;
    std::cout << "Second: " << std::endl;
    std::cin >> second_num;
    std::cout << "Third: " << std::endl;
    std::cin >> third_num;
    //Произвидение чисел
    std::cout << "Sum: " << first_num * second_num * third_num << std::endl;
}
// x / 4.0 + 10.5 ищем выражение через функцию
void searchX() {
    int x;
    //Вводим значения в нашу переменную
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    //реализовываем функцию
    std::cout << "result " << x << " / 4.0 + 10.5 = " << (x / 4.0 + 10.5) << std::endl;
}
int main() {
    std::setlocale(LC_ALL, "Russian");
    searchX();
    multiply();
    searchV();
    return 0;
}