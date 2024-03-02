#include <iostream>
#include <string>
#include <string_view>

std::string GetName(int num);
int GetAge(int num);

int main()
{
    bool first = true;
    std::string name1{ GetName(1) };
    int age1{ GetAge(1) };

    std::string name2{ GetName(2) };
    int age2{ GetAge(2) };

    first = (age2 > age1) ? false : true;
    
    if (first)
        std::cout << name1 << " (age: " << age1 << ") is older than " << name2 << " (age: " << age2 << ")";
    else
        std::cout << name2 << " (age: " << age2 << ") is older than " << name1 << " (age: " << age1 << ")";

    return 0;
}

std::string GetName(int num)
{
    std::cout << "Enter full name of person #" << num << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int GetAge(int num)
{
    std::cout << "Enter age for person #" << num << ": ";
    int age{};
    std::cin >> age;
    return age;
}