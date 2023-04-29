/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 19:47:30
 * @LastEditors: snake
 * @LastEditTime: 2023-04-28 19:51:56
 * @FilePath: \cppDemo\src\user\user.cpp
 */
#include "user/user.h"
user::user() {}
user::user(std::string name, int money)
{
    this->money = money;
    this->name = name;
}
user::~user() {}