/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:55:17 by jcardina          #+#    #+#             */
/*   Updated: 2024/04/08 17:44:24 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_lastindex = 0;
	this->_forPrint = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(void)
{
	if(this->_lastindex == 8)
	 this->_lastindex = 0;
	this->book[this->_lastindex].init(this->_lastindex);
	this->_lastindex ++;
	if(this->_forPrint != 8)
		this->_forPrint ++;
}

void PhoneBook::printContacts(void)
{
	int i = 0;
	std::cout << "================  ALL YOUR  CONTACTS  ==================" << std::endl;
	std::cout << "|index     | name     | Sname    | nickname | number   |" << std::endl;
	while (i < this->_forPrint)
	{
		this->book[i].print();
		i++;
	}
	std::cout << std::endl;
}

int PhoneBook::_lookingfor(void)
{
	int ret = -1;
	bool good = false;

	do{
		std::cout << "insert contact index" << std::endl;
		std::cin >>ret;
		if(ret >= 0 && ret < this->_forPrint)
			good = true;
		else
		{
			std::cin.clear();
			std::cout << "please" << std::endl;
		}
	}while(!good);
	return(ret);
}

void PhoneBook::search(void)
{
	int i = this->_lookingfor();
	this->book[i].print();
}

void	PhoneBook::welcome(void)
{
	std::cout << std::endl;
	std::cout << "--Welcome to Your ugly PhoneBook--" << std::endl;
	std::cout << std::endl;
	std::cout << "------------HOW TO USE------------" << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To search for a contact." << std::endl;
	std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}



