#include <iostream>
#include <string>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *ptr = &s;
    std::string &ref = s;

    std::cout << &s << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ref << std::endl;

    std::cout << s << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
}
