#include "ClapTrap.hpp"

int main(void) 
{
    ClapTrap a;
    ClapTrap b("R2D2");
    ClapTrap c("C3PO");

    std::cout<<std::endl;
    a.attack("C1P10");
    b.attack("C1P10");
    c.attack("C1P10");

    std::cout<<std::endl;
    a.takeDamage(15);
    b.takeDamage(2);
    c.takeDamage(9);

    std::cout<<std::endl;
    a.beRepaired(4);
    b.beRepaired(3);
    for(int i = 0; i < 10; i++)
        c.beRepaired(1);

    std::cout<<std::endl;
    return (0);
}