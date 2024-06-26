/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:36:50 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/11 12:55:54 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::string name1;
	std::string name2;

	std::cout << "insert a maranza name: ";
	std::cin >> name1;
	std::cout << std::endl;
	ScavTrap c1(name1);

	std::cout << "insert a maranza name: ";
	std::cin >> name2;
	std::cout << std::endl;
	ScavTrap c2(name2);

	for(int i = 0; i <= 11; i++)
	{
		c1.attack("shrek");
		c2.takeDamage(2);
		c1.beRepaired(1);
	}

	ScavTrap c3(c1);
	c3.attack("burro");
	c2.guardGate();

	return(0);
}
