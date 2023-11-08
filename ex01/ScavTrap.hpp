#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &ScavTrap);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap &ScavTrap);

        void guardGate(void);
};

#endif