#include <iostream>
int main()
{
    for (char c = ' '; c <= '~'; c++)
    {
        std::cout << c
                  << ((c + 1) % 32 ? ' ' : '\n');
    }
}