/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 21:33:41 by aaslan            #+#    #+#             */
/*   Updated: 2023/07/26 19:10:49 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "----------------------------------------" << std::endl;
	{
		ScavTrap figura("Figura");
		figura.attack("Chris Rock");
		figura.takeDamage(6);
		figura.beRepaired(4);
		figura.takeDamage(3);
		figura.guardGate();
		figura.beRepaired(8);
		figura.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ClapTrap dur("Máquina");
		dur.attack("Thor");
		dur.takeDamage(6);
		dur.beRepaired(4);
		dur.takeDamage(3);
		dur.beRepaired(8);
		dur.takeDamage(17);
	}
	return (0);
}
