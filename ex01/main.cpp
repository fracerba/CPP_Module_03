#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void print_status(ScavTrap &a, ScavTrap &b)
{
    std::cout<<std::endl;
    std::cout<<"ScavTrap "<<a.getName()<<" Hit points:"<<a.getHitPoints()<<", Energy points:";
    std::cout<<a.getEnergyPoints()<<" Attack Damage:"<<a.getAttackDamage()<<"\n";
    std::cout<<"ScavTrap "<<b.getName()<<" Hit points:"<<b.getHitPoints()<<", Energy points:";
    std::cout<<b.getEnergyPoints()<<" Attack Damage:"<<b.getAttackDamage()<<"\n";
}

int main(void) 
{
    ScavTrap a;
    ScavTrap b("IG-11");

    print_status(a, b);
    std::cout<<std::endl;
    a.attack("R3-S6");
    b.attack("R3-S6");

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
    a.guardGate();
    b.guardGate();

    std::cout<<std::endl;
    b.setEnergyPoints(0);
    std::cout<<"Energy points of "<<b.getName()<<" set to 0!"<<std::endl;
    b.attack("R3-S6");

    print_status(a, b);
    std::cout<<std::endl;
    return (0);
}