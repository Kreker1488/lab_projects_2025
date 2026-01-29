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
    size_ = other.size_;
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
    size_ = other.size_;
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

size_t MyString::get_size(){
    return size_;
}
char* MyString::get_str(){
    return str_;
}

void MyString::conc(MyString s1, MyString s2){
    delete[] str_;
    size_ = s1.get_size() + s2.get_size() - 1;
    str_ = new char[size_];
    for (size_t i = 0; i < s1.get_size(); i++){
        str_[i] = s1.get_str()[i];
    }
    str_[s1.get_size() - 1] = ' ';
    for (size_t i = 0; i < s2.get_size() - 1; i++){
        str_[(s1.get_size() + i)] = s2.get_str()[i];
    }
}