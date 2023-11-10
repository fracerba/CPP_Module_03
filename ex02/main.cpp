#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void print_status(FragTrap &a, FragTrap &b)
{
    std::cout<<std::endl;
    std::cout<<"FragTrap "<<a.getName()<<" Hit points:"<<a.getHitPoints()<<", Energy points:";
    std::cout<<a.getEnergyPoints()<<" Attack Damage:"<<a.getAttackDamage()<<"\n";
    std::cout<<"FragTrap "<<b.getName()<<" Hit points:"<<b.getHitPoints()<<", Energy points:";
    std::cout<<b.getEnergyPoints()<<" Attack Damage:"<<b.getAttackDamage()<<"\n";
}

int main(void) 
{
    FragTrap a;
    FragTrap b("K-2SO");

    print_status(a, b);
    std::cout<<std::endl;
    a.attack("a Stormtrooper");
    b.attack("a Stormtrooper");

    print_status(a, b);
    std::cout<<std::endl;
    a.takeDamage(105);
    b.takeDamage(2);

    print_status(a, b);
    std::cout<<std::endl;
    a.beRepaired(4);
    b.beRepaired(3);

    print_status(a, b);
    std::cout<<std::endl;
    a.highFivesGuys();
    b.highFivesGuys();

    std::cout<<std::endl;
    b.setEnergyPoints(0);
    std::cout<<"Energy points of "<<b.getName()<<" set to 0!"<<std::endl;
    b.highFivesGuys();

    print_status(a, b);
    std::cout<<std::endl;
    return (0);
}