#include"phonebook.hpp"

Contact::Contact(void)
{ 
    std::cout << "constucteur called" << std::endl;
    return;
}

Contact::~Contact(void)
{
    std::cout << "Destructeur called" << std::endl;
    return;
}

PhoneBook::PhoneBook(void)
{ 
    std::cout << "constucteur called" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Destructeur called" << std::endl;
    return;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    _first_name = first_name;
    _last_name = last_name;
    _nickname = nickname;
    _phone_number = phone_number;
    _darkest_secret = darkest_secret;
}

// namespace toto{
//     void cout(std::string str) {
//         printf("%s\n", str);
//     }
// }
// #include<array>




void ft_add(PhoneBook &phonebook)
{
    std::string str;
    std::string s1, s2, s3, s4, s5;

    std::cout << "first name :";
    std::cin.ignore();
    std::getline (std::cin, s1);

    std::cout << "last name :";
    std::getline (std::cin, s2);

    std::cout << "nickname :";
    std::getline (std::cin, s3);

    std::cout << "phone number :";
    std::getline (std::cin, s4);

    std::cout << "darkest secret :";
    std::getline (std::cin, s5);

    phonebook.tab[phonebook.i] = Contact(s1, s2, s3, s4, s5);


    // std::cout << phonebook.tab[phonebook.i]._first_name;
    // std::cout << phonebook.tab[phonebook.i]._last_name;
    // std::cout << phonebook.tab[phonebook.i]._nickname;
    // std::cout << phonebook.tab[phonebook.i]._phone_number;
    // std::cout << phonebook.tab[phonebook.i]._darkest_secret << std::endl;
    if (phonebook.nb_contact < 8)
        phonebook.nb_contact++;
    if(phonebook.i < 7)
        phonebook.i = phonebook.i+1;
    else
        phonebook.i = 0;
}


std::string ft_addspace(int len)
{
    int i = 0;
    std::string str;

    while(len < 10)
    {
        str.append(" ");
        len++;
        i++;
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
        std::cout << "|" << ft_addspace(phonebook.tab[i]._first_name.size()) << fix_width(phonebook.tab[i]._first_name);
        std::cout << "|" << ft_addspace(phonebook.tab[i]._last_name.size()) << fix_width(phonebook.tab[i]._last_name);
        std::cout << "|" << ft_addspace(phonebook.tab[i]._nickname.size()) << fix_width(phonebook.tab[i]._nickname);
        // std::cout << "darkest_secret :" << phonebook.tab[i]._darkest_secret << std::endl;
        // std::cout << "phone_number :" << phonebook.tab[i]._phone_number << std::endl;
        std::cout << "|" << std::endl;
    }
    std::cout << " ------------------------------------------- " << std::endl;
}


int main(void)
{
    PhoneBook phonebook;
    std::string buff;

    int i = 0;
    phonebook.nb_contact = 0;
    phonebook.i = 0;
    while (42)
    {

        std::cin >> buff;
        if (buff == "ADD")
            ft_add(phonebook);
        if (buff == "SEARCH")
            ft_read(phonebook);
        if (buff == "EXIT")
            break;
    }
    return 0;
}
