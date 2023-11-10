#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout<<"DiamondTrap Default constructor called\n";
    this->name = "Default";
    ClapTrap::name = name + "_clap_name";
    FragTrap::hit_points = 100;
    ScavTrap::energy_points = 50;
    FragTrap::attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    std::cout<<"DiamondTrap "<<name<<" constructor called\n";
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    FragTrap::hit_points = 100;
    ScavTrap::energy_points = 50;
    FragTrap::attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &Clap) : ClapTrap(Clap.name + "_clap_name"), FragTrap(Clap.name), ScavTrap(Clap.name)
{
    std::cout<<"DiamondTrap "<<Clap.name<<" Copy constructor called\n";
    *this = Clap;
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"DiamondTrap "<<this->name<<" Destructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &Clap)
{
    std::cout<<"DiamondTrap "<<Clap.name<<" Copy assignment operator called\n";
    this->name = Clap.name;
    FragTrap::hit_points = Clap.FragTrap::hit_points;
    ScavTrap::energy_points = Clap.ScavTrap::energy_points;
    FragTrap::attack_damage = Clap.getAttackDamage();
    return(*this);
}

void DiamondTrap::whoAmI(void)
{
    if(this->getHitPoints() <= 0)
    {
        std::cout<<"DiamondTrap "<<this->name<<" has been destroyed!\n";
        return ;
    }
    if(this->getEnergyPoints() <= 0)
    {
        std::cout<<"DiamondTrap "<<this->name<<" has no energy left!\n";
        return ;
    }
    std::cout<<"DiamondTrap name: "<<this->name<<", ClapTrap name: "<<this->ClapTrap::name<<"\n";
}
