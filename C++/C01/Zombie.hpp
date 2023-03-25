#ifndef ZOMBIE_H
# define ZOMBIE_H



#include<stdio.h>
#include<iostream>
#include<sstream>
#include<cctype>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
    

    private :
        void announce( void );
        std::string name;

};


#endif