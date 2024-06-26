/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:13:13 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/08 13:45:02 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "Ora è tutto orco" << std::endl;
}
void Harl::info(void)
{
	std ::cout << "Gli orchi sono come le cipolle. " <<std::endl;
}

void Harl::warning(void)
{
	std ::cout << "Mi piace quel masso. È un bel masso" <<std::endl;
}
void Harl::error(void)
{
	std ::cout << "No, non i bottoni… non i miei bottoni di gomma!" <<std::endl;
}

Harl::Harl()
{
	this->funcs[0] = &Harl::debug;
	this->funcs[1] = &Harl::info;
	this->funcs[2] = &Harl::warning;
	this->funcs[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::complain( std:: string level ) {
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++ ;
	if (i < 4)
		(this->*funcs[i])();
}



