#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &Clap);
        ~FragTrap();
        FragTrap& operator=(const FragTrap &Clap);

        void highFivesGuys(void);
};

#endif