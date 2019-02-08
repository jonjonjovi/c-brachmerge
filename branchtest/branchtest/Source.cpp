#include <iostream>
#define num 1000
int func();
int main()
{
    std::cout << num << std::endl;
    std::cout << func() << std::endl;
    std::cout << "adding line by reviewer" << std::endl;
    std::cout << "adding line by coder" << std::endl;
    std::cout << "adding line by coder" << std::endl;
}
int func()
{
    std::cout << "adding line by coder3" << std::endl;

    std::cout << "adding line by coder5" << std::endl;

    return 9;
}
