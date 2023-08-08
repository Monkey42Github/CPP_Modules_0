/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:55:09 by pschemit          #+#    #+#             */
/*   Updated: 2023/03/26 17:55:09 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include<stdio.h>
#include<iostream>
#include<sstream>
#include<cctype>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);

        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_phone_number(void);
        std::string get_darkest_secret(void);

    private:
        std::string     _first_name;
        std::string     _last_name;
        std::string     _nickname;
        std::string     _phone_number;
        std::string     _darkest_secret;
};

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        Contact tab[8];
        int     i;
        int     nb_contact;
        void    ft_read(Contact tab);
};

#endif
