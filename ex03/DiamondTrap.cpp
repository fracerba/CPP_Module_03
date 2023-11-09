#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout<<"DiamondTrap Default constructor called\n";
    this->name = "Default";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"DiamondTrap "<<name<<" constructor called\n";
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &Clap) : ClapTrap(Clap.getName())
{
    std::cout<<"DiamondTrap "<<Clap.getName()<<" Copy constructor called\n";
    *this = Clap;
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"DiamondTrap "<<this->name<<" Destructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &Clap)
{
    std::cout<<"DiamondTrap "<<Clap.getName()<<" Copy assignment operator called\n";
    this->name = Clap.getName();
    this->hit_points = Clap.getHitPoints();
    this->energy_points = Clap.getEnergyPoints();
    this->attack_damage = Clap.getAttackDamage();
    return(*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout<<"DiamondTrap name: "<<this->getName()<<", ClapTrap name: "<<this->getName()<<"\n";
}
