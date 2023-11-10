#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout<<"FragTrap Default constructor called\n";
    this->name = "Default";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"FragTrap "<<name<<" constructor called\n";
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &Clap) : ClapTrap(Clap.name)
{
    std::cout<<"FragTrap "<<Clap.name<<" Copy constructor called\n";
    *this = Clap;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap "<<this->name<<" Destructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap &Clap)
{
    std::cout<<"FragTrap "<<Clap.name<<" Copy assignment operator called\n";
    this->name = Clap.name;
    this->hit_points = Clap.getHitPoints();
    this->energy_points = Clap.getEnergyPoints();
    this->attack_damage = Clap.getAttackDamage();
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
    if(this->getHitPoints() <= 0)
    {
        std::cout<<"FragTrap "<<this->name<<" has been destroyed!\n";
        return ;
    }
    if(this->getEnergyPoints() <= 0)
    {
        std::cout<<"FragTrap "<<this->name<<" has no energy left!\n";
        return ;
    }
    std::cout<<"FragTrap "<<this->name<<":\"Give me some high fives guys!\"\n";
}