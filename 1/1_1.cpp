/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-02-14 09:02:14
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-02-14 09:10:34
 * @FilePath: \homework\1_1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
int main()
{
    float score;
    char level;
    cin>>score;
    switch(int(score)/10)
    {
        case(9):
        case(10): level = 'A';
        break;
        case(8):
        level = 'B';
        break;
        case(7):
        level = 'C';
        break;
        case(6):
        level = 'D';
        break;
        case(5):
        case(4):
        case(3):
        case(2):
        case(1):
        case(0):
        level = 'E';
    }
    cout<<level;
}