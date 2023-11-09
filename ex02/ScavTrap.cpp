#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout<<"ScavTrap Default constructor called\n";
    this->name = "Default";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"ScavTrap "<<name<<" constructor called\n";
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &Clap) : ClapTrap(Clap.getName())
{
    std::cout<<"ScavTrap "<<Clap.getName()<<" Copy constructor called\n";
    *this = Clap;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap "<<this->name<<" Destructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &Clap)
{
    std::cout<<"ScavTrap "<<Clap.getName()<<" Copy assignment operator called\n";
    this->name = Clap.getName();
    this->hit_points = Clap.getHitPoints();
    this->energy_points = Clap.getEnergyPoints();
    this->attack_damage = Clap.getAttackDamage();
    return(*this);
}

void ScavTrap::attack(const std::string& target)
{
    if(this->getHitPoints() <= 0)
    {
        std::cout<<"ScavTrap "<<this->getName()<<" has been destroyed!\n";
        return ;
    }
    if(this->getEnergyPoints() <= 0)
    {
        std::cout<<"ScavTrap "<<this->getName()<<" has no energy left!\n";
        return ;
    }
    this->setEnergyPoints(this->getEnergyPoints() - 1);
    std::cout<<"ScavTrap "<<this->getName()<<" attacks "<<target<<", causing ";
    std::cout<<this->getAttackDamage()<<" points of damage!\n";
}

void ScavTrap::guardGate(void)
{
    if(this->getHitPoints() <= 0)
    {
        std::cout<<"ScavTrap "<<this->getName()<<" has been destroyed!\n";
        return ;
    }
    if(this->getEnergyPoints() <= 0)
    {
        std::cout<<"ScavTrap "<<this->getName()<<" has no energy left!\n";
        return ;
    }
    std::cout<<"ScavTrap "<<this->getName()<<" is now in Gatekeeper mode!\n";
}

