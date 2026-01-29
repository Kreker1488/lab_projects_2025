#pragma once

class MyString{
public:
    MyString();

    MyString(const char c, const size_t size);

    MyString(const char* c, const size_t size);

    MyString(const MyString& other);

    ~MyString();

    MyString& operator=(const MyString& other);


    void print() const;

    size_t get_size();
    char* get_str();

    void conc(MyString s1, MyString s2);
private:
    size_t size_;
    char* str_;
};