#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"ScavTrap Default constructor called\n";
    this->name = "Nameless";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout<<"ScavTrap String constructor called\n";
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ScavTrap::ScavTrap(const ScavTrap &Clap)
{
    std::cout<<"ScavTrap Copy constructor called\n";
    *this = Clap;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap Destructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &Clap)
{
    std::cout<<"ScavTrap Copy assignment operator called\n";
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

void ScavTrap::takeDamage(unsigned int amount)
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
    this->setHitPoints(this->getHitPoints() - amount);
    std::cout<<"ScavTrap "<<this->getName()<<" is attacked and suffers ";
    std::cout<<amount<<" points of damage!\n";
}

void ScavTrap::beRepaired(unsigned int amount)
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
    this->setHitPoints(this->getHitPoints() + amount);
    std::cout<<"ScavTrap "<<this->getName()<<" repairs itself and gets ";
    std::cout<<amount<<" hit points back!\n";
}
