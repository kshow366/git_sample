#include<iostream>

int sum(int,int);
int multiple(int,int);

int main()
{
    int a = 2; int b = 9;
    std::cout << sum(a,b) <<std::endl;
    std::cout << multiple(a,b) <<std::endl;

    return 0;
}

int multiple(int a, int b)
{
    return a*b;
}