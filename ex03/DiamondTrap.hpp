#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &Clap);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap &Clap);

        void whoAmI(void);
        using ScavTrap::attack;
};

#endif
