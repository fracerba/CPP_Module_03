#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

class ClapTrap
{
    protected:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &ClapTrap);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap &ClapTrap);

        std::string getName(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;
        int getAttackDamage(void) const;

        void setName(std::string);
        void setHitPoints(int);
        void setEnergyPoints(int);
        void setAttackDamage(int);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif