#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"ClapTrap Default constructor called\n";
    this->name = "Nameless";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout<<"ClapTrap String constructor called\n";
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &Clap)
{
    std::cout<<"ClapTrap Copy constructor called\n";
    *this = Clap;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap Destructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &Clap)
{
    std::cout<<"ClapTrap Copy assignment operator called\n";
    this->name = Clap.getName();
    this->hit_points = Clap.getHitPoints();
    this->energy_points = Clap.getEnergyPoints();
    this->attack_damage = Clap.getAttackDamage();
    return(*this);
}

std::string ClapTrap::getName(void) const
{
    return(this->name);
}

int ClapTrap::getHitPoints(void) const
{
    return(this->hit_points);
}

int ClapTrap::getEnergyPoints(void) const
{
    return(this->energy_points);
}

int ClapTrap::getAttackDamage(void) const
{
    return(this->attack_damage);
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(int amount)
{
    this->hit_points = amount;
}

void ClapTrap::setEnergyPoints(int amount)
{
    this->energy_points = amount;
}

void ClapTrap::setAttackDamage(int amount)
{
    this->attack_damage = amount;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->getHitPoints() <= 0)
    {
        std::cout<<"ClapTrap "<<this->getName()<<" has been destroyed!\n";
        return ;
    }
    if(this->getEnergyPoints() <= 0)
    {
        std::cout<<"ClapTrap "<<this->getName()<<" has no energy left!\n";
        return ;
    }
    this->setEnergyPoints(this->getEnergyPoints() - 1);
    std::cout<<"ClapTrap "<<this->getName()<<" attacks "<<target<<", causing ";
    std::cout<<this->getAttackDamage()<<" points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->getHitPoints() <= 0)
    {
        std::cout<<"ClapTrap "<<this->getName()<<" has been destroyed!\n";
        return ;
    }
    if(this->getEnergyPoints() <= 0)
    {
        std::cout<<"ClapTrap "<<this->getName()<<" has no energy left!\n";
        return ;
    }
    this->setHitPoints(this->getHitPoints() - amount);
    std::cout<<"ClapTrap "<<this->getName()<<" is attacked and suffers ";
    std::cout<<amount<<" points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->getHitPoints() <= 0)
    {
        std::cout<<"ClapTrap "<<this->getName()<<" has been destroyed!\n";
        return ;
    }
    if(this->getEnergyPoints() <= 0)
    {
        std::cout<<"ClapTrap "<<this->getName()<<" has no energy left!\n";
        return ;
    }
    this->setEnergyPoints(this->getEnergyPoints() - 1);
    this->setHitPoints(this->getHitPoints() + amount);
    std::cout<<"ClapTrap "<<this->getName()<<" repairs itself and gets ";
    std::cout<<amount<<" hit points back!\n";
}
