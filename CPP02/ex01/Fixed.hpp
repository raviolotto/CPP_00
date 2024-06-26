/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:09:39 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/09 15:42:57 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_frBits = 8;

public:

	//cons & dis
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &rhs );
	~Fixed();

	//overload
	Fixed& operator=( const Fixed &rhs );

	//others
	void	setRawBits( int const raw );
	int		getRawBits( void ) const;
	int		toInt( void ) const;
	float	toFloat( void ) const;

}; //

std::ostream & operator<<( std::ostream & ost, Fixed const & i );

#endif
