#pragma once

class MyString{
public:
    MyString(); // конструктор по умолчанию

    MyString(const char c, const size_t size); // конструктор, принимающий строку

    MyString(const char* c, const size_t size);

    MyString(const MyString& other); // конструктор, принимающий другой объект класса

    ~MyString(); // декструктор 

    MyString& operator=(const MyString& other); // перегрузка оператор =


    void print() const; // метод вывода строк

    size_t get_size() const; // геттеры размера и значения
    char* get_str() const;

    friend MyString operator+(const MyString& s1, const MyString& s2); // перегрузка оператора +
    friend MyString operator*(const MyString& s1, int count); // перегрузка оператора *
    char& operator[](int number); // перегрузка оператора []
private:
    size_t size_;
    char* str_;
};