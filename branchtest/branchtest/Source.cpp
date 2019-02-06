#include <iostream>
#define num 1000
int func();
int main()
{
    std::cout << num << std::endl;
    std::cout << func() << std::endl;
    std::cout << "adding line by reviewer" << std::endl;
    std::cout << "adding line by coder" << std::endl;
    std::cout << "adding line by coder2" << std::endl;
}
int func()
{
    return 9;
}
