#include <iostream>
#define num 1000
int func();
int main()
{
    std::cout << num << std::endl;
    std::cout << func() << std::endl;
}
int func()
{
    return 9;
}