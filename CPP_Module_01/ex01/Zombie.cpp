#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << "\033[31mZombie " << name <<" is dead...         for now.\n\033[0m";
}

void Zombie::setName(std::string newName)
{
	name = newName;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
