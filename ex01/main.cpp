#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) 
{
    ScavTrap a;
    ScavTrap b("IG-11");

    std::cout<<std::endl;
    a.attack("R3-S6");
    b.attack("R3-S6");

    std::cout<<std::endl;
    a.takeDamage(105);
    b.takeDamage(2);

    std::cout<<std::endl;
    a.beRepaired(4);
    b.beRepaired(3);

    std::cout<<std::endl;
    a.guardGate();
    b.guardGate();

    std::cout<<std::endl;
    b.setEnergyPoints(0);
    std::cout<<"Energy points of "<<b.getName()<<" set to 0!"<<std::endl;
    b.attack("R3-S6");

    std::cout<<std::endl;
    return (0);
}