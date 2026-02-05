#include <iostream>
#include "class.hpp"

int main(){
    MyString s1("hello ", 7);
    s1.print(); // тестовая строка

    MyString s2("world", 6);
    s2.print(); // тестовая строка

    MyString s_copy_1 = s1;
    s_copy_1.print(); // присваивание без перегрузки

    MyString s_copy_2;
    s_copy_2 = s2;
    s_copy_2.print(); // копирование с перегрузкой

    MyString s3 = s1 + s2;
    s3.print(); // конкотенация

    MyString s4 = s1 * 3;
    s4.print(); // умножение строки на число

    std::cout << s1[2] << std::endl; // перегрузка оператора []
    s1[2] = 'h';
    s1.print();
}
