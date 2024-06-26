/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:37:52 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/11 10:54:36 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	this->_weapon = &newWeapon;
}

void HumanB::attack()
{
	if (this->_weapon != NULL)
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << _name << " can only run away " << std::endl;
}

HumanB::~HumanB()
{
}
