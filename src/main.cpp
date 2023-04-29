/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-21 21:44:50
 * @LastEditors: snake
 * @LastEditTime: 2023-04-29 08:30:51
 * @FilePath: \AnimalWanderingRecord\src\main.cpp
 */
#include "controller/controller.h"
int main()
{
    controller::getInstance()->start();
    return 0;
}