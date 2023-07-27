/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:14:26 by aaslan            #+#    #+#             */
/*   Updated: 2023/07/26 22:37:00 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap - Default constructor called" << std::endl;

	name = "Ali";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string nameValue) : ClapTrap(nameValue)
{
	std::cout << "FragTrap - Name constructor called" << std::endl;

	name = nameValue;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap - Copy constructor called" << std::endl;

	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap - Copy assignment operator called" << std::endl;

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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap - Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (hitPoints <= 0)
		std::cout << "FragTrap - " << name << " cannot high five"
				  << " because he is dead! ☠️" << std::endl;
	else
		std::cout << "FragTrap - " << name << " wants to give you high fives! ✋🏼" << std::endl;
}
