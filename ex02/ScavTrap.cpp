/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 22:14:25 by aaslan            #+#    #+#             */
/*   Updated: 2023/07/26 19:09:00 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap - Default constructor called" << std::endl;

	name = "Ali";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string nameValue) : ClapTrap(nameValue)
{
	std::cout << "ScavTrap - Name constructor called" << std::endl;

	name = nameValue;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap - Copy constructor called" << std::endl;

	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap - Copy assignment operator called" << std::endl;

	// verilen nesne kendisi değilse atamayı yap
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}

	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap - Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap - " << name << " cannot attack because is dead!" << std::endl;
		return;
	}

	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap - " << name << " cannot attack because it has no energy!" << std::endl;
		return;
	}

	energyPoints--;

	std::cout << "ScavTrap - " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap - " << name << " is now in Gate keeper mode." << std::endl;
}
