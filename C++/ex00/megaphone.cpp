#include<stdio.h>
#include<iostream>

int main(int ac, char **av)
{   
    int i = 0;
    int j = 1;

    if(ac > 1)
    {
        while(av[j])
        {
            i = 0;
            while(av[j][i])
            {
                if (av[j][i] > 96 && av[j][i] < 123)
                    std::cout << (char)(av[j][i]-32);
                else
                    std::cout << av[j][i];
                i++;
            }
            j++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
