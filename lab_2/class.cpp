#include "class.hpp"
#include <iostream>


MyString::MyString() : size_(0), str_(nullptr){} //вызывается если мы не ввели строку
MyString::MyString(const char c, const size_t size) : size_(size), str_(new char[size_]){ //вызывается если мы сразу ввели строку
    std::fill(str_, str_ + size_, c);
}
MyString::MyString(const char* c, const size_t size) : size_(size), str_(new char[size_]){
    std::copy(c, c + size_, str_);
}

MyString::MyString(const MyString& other){ //вызывается когда мы присваиваем значение представителю класса при инициализации
    size_ = other.size_ - 1;
    str_ = new char[size_];
    std::copy(other.str_, other.str_ + other.size_ - 1, str_);
}
MyString::~MyString(){
    if (str_ != nullptr){
        delete[] str_;
    }
}
MyString& MyString::operator=(const MyString& other){ //вызывается если мыхотим присвоить уже созданной переменной значение представителя другого класса. оператор присваивания-копирования
    delete[] str_;
    size_ = other.size_ - 1;
    str_ = new char[size_];
    std::copy(other.str_, other.str_ + other.size_ - 1, str_);
    return *this;
}

void MyString::print() const{
    for (size_t i = 0; i < size_; i++){
        std::cout << str_[i];
    }
    std::cout << std::endl;
}

size_t MyString::get_size() const{
    return size_;
}
char* MyString::get_str() const{
    return str_;
}

MyString operator+(const MyString& s1, const MyString& s2){
    // Проверка на nullptr
    /*if (!s1.get_str() || !s2.get_str()) {
        // Обработка ошибки
        if (!s1.get_str() && !s2.get_str()) return MyString(" ", 1);
        if (!s1.get_str()) return MyString(s2);
        return MyString(s1);
    }*/

    size_t new_size_ = (s1.get_size() - 1) + (s2.get_size() - 1) + 1;
    char* new_str_ = new char[new_size_];
    strcpy(new_str_, s1.get_str());
    strcat(new_str_, s2.get_str());

    MyString result;
    result.size_ = new_size_;
    result.str_ = new_str_;
    
    return result;
}
MyString operator*(const MyString& s1, int count){
    size_t new_size_ = (s1.get_size()) * count - count + 1;
    char* new_str_ = new char[new_size_];
    strcpy(new_str_, s1.get_str());
    for (int i = 0; i < count - 1; i++){
        strcat(new_str_, s1.get_str());
    }
    
    MyString result;
    result.size_ = new_size_;
    result.str_ = new_str_;
    
    return result;
}

char& MyString::operator[](int number){
    return str_[number];
}