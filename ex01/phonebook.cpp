/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:53:22 by pschemit          #+#    #+#             */
/*   Updated: 2023/03/26 17:54:49 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"

Contact::Contact(void)
{ 
    return;
}
Contact::~Contact(void)
{
    return;
}
PhoneBook::PhoneBook(void)
{ 
    return;
}
PhoneBook::~PhoneBook(void)
{
    return;
}


std::string Contact::get_first_name(void)
{
    return(this->_first_name);
}
std::string Contact::get_last_name(void)
{
    return(this->_last_name);
}
std::string Contact::get_nickname(void)
{
    return(this->_nickname);
}
std::string Contact::get_phone_number(void)
{
    return(this->_phone_number);
}
std::string Contact::get_darkest_secret(void)
{
    return(this->_darkest_secret);
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_nickname = nickname;
    this->_phone_number = phone_number;
    this->_darkest_secret = darkest_secret;
}

void ft_add(PhoneBook &phonebook)
{
    std::string str;
    std::string s1, s2, s3, s4, s5;

    std::cout << "first name :";
    std::getline (std::cin, s1);

    std::cout << "last name :";
    std::getline (std::cin, s2);

    std::cout << "nickname :";
    std::getline (std::cin, s3);

    std::cout << "phone number :";
    std::getline (std::cin, s4);

    std::cout << "darkest secret :";
    std::getline (std::cin, s5);

    if (s1.empty() ||  s2.empty() || s3.empty() || s4.empty() || s5.empty())
    {
        std::cout << "Aucun champs ne doivent etre vide !" << std::endl;
        return ;
    }
    phonebook.tab[phonebook.i] = Contact(s1, s2, s3, s4, s5);
    if (phonebook.nb_contact < 8)
        phonebook.nb_contact++;
    if (phonebook.i < 7)
        phonebook.i = phonebook.i+1;
    else
        phonebook.i = 0;
}

std::string ft_addspace(int len)
{
    std::string str;

    while(len < 10)
    {
        str.append(" ");
        len++;
    }
    return(str);
} 

std::string	fix_width(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[str.size() - 1] = '.';
	}
	return (str);
}

void ft_read(PhoneBook &phonebook)
{
    int i = 0;

    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (i = 0; i < phonebook.nb_contact; i++)
    {
        std::cout << "|" << ft_addspace(1) << i;
        std::cout << "|" << ft_addspace(phonebook.tab[i].get_first_name().size()) << fix_width(phonebook.tab[i].get_first_name());
        std::cout << "|" << ft_addspace(phonebook.tab[i].get_last_name().size()) << fix_width(phonebook.tab[i].get_last_name());
        std::cout << "|" << ft_addspace(phonebook.tab[i].get_nickname().size()) << fix_width(phonebook.tab[i].get_nickname());
        std::cout << "|" << std::endl;
    }
    std::cout << " ------------------------------------------- " << std::endl;

    int index;
    std::cout << "Entrez l'index :";
    std::string indexstr;
    std::getline (std::cin, indexstr);

    if (std::isdigit(indexstr[0]) && indexstr.size() == 1)
    {
        index = indexstr[0] - 48;
        if (index > 7 || index < 0)
        {
            std::cout << "BAD index !" << std::endl;
            return ;
        }
        if (index < phonebook.nb_contact)
        {
            std::cout << "index :" << index << std::endl;
            std::cout << "first_name :" << phonebook.tab[index].get_first_name() << std::endl;
            std::cout << "last_name :" << phonebook.tab[index].get_last_name() << std::endl;
            std::cout << "nickname :" << phonebook.tab[index].get_nickname() << std::endl;
            std::cout << "darkest_secret :" << phonebook.tab[index].get_darkest_secret() << std::endl;
            std::cout << "phone_number :" << phonebook.tab[index].get_phone_number() << std::endl;
        }
        else
            std::cout << "Cet index ne correspond à aucun contact" << std::endl;
    }
    else
    {
        std::cout << "BAD index !" << std::endl;
        return ;
    }
}

int main(void)
{
    PhoneBook phonebook;
    std::string buff;

    phonebook.nb_contact = 0;
    phonebook.i = 0;
    while (42)
    {
        std::getline (std::cin, buff);    
        if (buff == "ADD")
            ft_add(phonebook);
        if (buff == "SEARCH")
            ft_read(phonebook);
        if (buff == "EXIT")
            break;
    }
    return 0;
}
