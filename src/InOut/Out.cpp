/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-07-31 09:38:58
 * @LastEditors: snake qzrobot_snake@outlook.com
 * @LastEditTime: 2023-07-31 10:00:47
 * @FilePath: \AnimalWanderingRecord\src\InOut\Out.cpp
 */
#include "InOut/Out.hpp"

Out::Out() : os(std::cout) {}
template <typename T> void Out::out(char spear, int size, ...)
{
    va_list args;
    va_start(args, size);
    for (int i = 0; i < size; i++)
    {
        std::cout << va_arg(args, T) << spear;
    }
    va_end(args);
}