/*
 * @Author: tansong33 13297493093@163.com
 * @Date: 2023-02-14 22:48:17
 * @LastEditors: tansong33 13297493093@163.com
 * @LastEditTime: 2023-02-15 22:40:28
 * @FilePath: \homework\1_3.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<cmath>
using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    cout<<(sqrt((a+b+c) * (a+b-c) * (a+c-b) * (b+c-a)))/4;
    return 0;
}

