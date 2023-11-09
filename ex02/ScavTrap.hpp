#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &Clap);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap &Clap);

        void attack(const std::string& target);
        void guardGate(void);
};

#endif