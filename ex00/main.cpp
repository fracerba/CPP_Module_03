#include "ClapTrap.hpp"

void print_status(ClapTrap &a, ClapTrap &b, ClapTrap &c)
{
    std::cout<<std::endl;
    std::cout<<"ClapTrap "<<a.getName()<<" Hit points:"<<a.getHitPoints()<<", Energy points:";
    std::cout<<a.getEnergyPoints()<<" Attack Damage:"<<a.getAttackDamage()<<"\n";
    std::cout<<"ClapTrap "<<b.getName()<<" Hit points:"<<b.getHitPoints()<<", Energy points:";
    std::cout<<b.getEnergyPoints()<<" Attack Damage:"<<b.getAttackDamage()<<"\n";
    std::cout<<"ClapTrap "<<c.getName()<<" Hit points:"<<c.getHitPoints()<<", Energy points:";
    std::cout<<c.getEnergyPoints()<<" Attack Damage:"<<c.getAttackDamage()<<"\n";
}

int main(void) 
{
    ClapTrap a;
    ClapTrap b("R2D2");
    ClapTrap c("C3PO");

    print_status(a, b, c);
    std::cout<<std::endl;
    a.attack("C1P10");
    b.attack("C1P10");
    c.attack("C1P10");

    print_status(a, b, c);
    std::cout<<std::endl;
    a.takeDamage(15);
    b.takeDamage(2);
    c.takeDamage(9);

    print_status(a, b, c);
    std::cout<<std::endl;
    a.beRepaired(4);
    b.beRepaired(3);
    for(int i = 0; i < 10; i++)
        c.beRepaired(1);

    print_status(a, b, c);
    std::cout<<std::endl;
    return (0);
}