/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:09:12 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/09 13:31:29 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed & fx)
{
	std::cout << "Copy constructor called" << std::endl;
	//this->_fixedPoint = fx.getRawBits();
	*this = fx;
}

Fixed::Fixed(const int value)
{
	std::cout << "int constructor called" << std::endl;
	this->_fixedPoint = value << _frBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "float constructor called" << std::endl;
	this->_fixedPoint = roundf(value * (1 << _frBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

Fixed& Fixed::operator=( const Fixed &rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

float Fixed::toFloat( void ) const
{
	return  static_cast<float> (this->_fixedPoint) / (1 << this->_frBits);
}

int Fixed::toInt(void) const
{
	return this->_fixedPoint >> this->_frBits;
}

std::ostream & operator<<( std::ostream & ost, Fixed const & i )
{
	ost << i.toFloat();
	return ost;
}

