#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) 
{
    FragTrap a;
    FragTrap b("K-2SO");

    std::cout<<std::endl;
    a.attack("a Stormtrooper");
    b.attack("a Stormtrooper");

    std::cout<<std::endl;
    a.takeDamage(105);
    b.takeDamage(2);

    std::cout<<std::endl;
    a.beRepaired(4);
    b.beRepaired(3);

    std::cout<<std::endl;
    a.highFivesGuys();
    b.highFivesGuys();

    std::cout<<std::endl;
    b.setEnergyPoints(0);
    std::cout<<"Energy points of "<<b.getName()<<" set to 0!"<<std::endl;
    b.highFivesGuys();

    std::cout<<std::endl;
    return (0);
}