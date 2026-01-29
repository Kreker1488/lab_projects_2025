#include <iostream>
#include "class.hpp"

int main(){
    MyString s1("hello", 6);
    s1.print();

    MyString s2("world", 6);
    s2.print();

    MyString s3("world", 6);
    s3.conc(s1, s2);
    s3.print();
}
