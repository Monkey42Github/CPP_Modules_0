#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include<stdio.h>
#include<iostream>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);

        std::string     _first_name;
        std::string     _last_name;
        std::string     _nickname;
        std::string     _phone_number;
        std::string     _darkest_secret;
    private:
};


class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        int i;
        int nb_contact;
        void ft_read(Contact tab);
        Contact tab[8];
};


#endif
