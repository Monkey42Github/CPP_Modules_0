/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:52:13 by pschemit          #+#    #+#             */
/*   Updated: 2023/03/26 17:52:14 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<iostream>
#include<sstream>

int main(int ac, char **av)
{
    std::stringstream str;
    std::string string;


    if(ac > 1)
    {
        while(*(++av))
            str << *av;
        string = str.str();
        for (size_t i = 0; i < string.size(); i++)
            std::cout << (char)(std::toupper(string[i]));
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
