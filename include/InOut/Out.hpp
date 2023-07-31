/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-07-31 09:38:20
 * @LastEditors: snake qzrobot_snake@outlook.com
 * @LastEditTime: 2023-07-31 10:00:16
 * @FilePath: \AnimalWanderingRecord\include\InOut\Out.hpp
 */
#ifndef OUT_H
#define OUT_H
#include <cstdarg>
#include <iostream>
#include <ostream>
class Out
{
  public:
    Out();
    template <typename T> void out(char spear, int size, ...);

  private:
    std::ostream &os;
};
#endif