#include<stdio.h>
#include<iostream>


// int gl_var = 1;
// int f(void){return 2; }

// namespace Foo {
//     int gl_var = 3;
//     int f(void){return 4; }
// }

// namespace Muf = Foo;

// int main(void)
// {
//     printf("%d\n", Foo::gl_var);
// }

// int main(void)
// {
//     char    buff[512];

//     std::cout << "Hello Word !" << std::endl;
//     std::cout << "Hello Word !";
//     std::cin >> buff;
//     std::cout << "test : [" << buff << "]" << std::endl;
// }


#include"Sample.class.hpp"


Sample::Sample(void)
{ 
    std::cout << "constucteur called" << std::endl;
    this->i = 42;
    std::cout << this->i << std::endl;
    this->bar();
    return;
}

Sample::~Sample(void)
{ 
    std::cout << "Destructeur called" << std::endl;
    return;
}

void Sample::bar(void)
{
    std::cout << "test" << std::endl;
    return;
}

int main(void)
{   
    Sample instance;
    return 0;
}