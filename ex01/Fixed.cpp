/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:56:25 by fredchar          #+#    #+#             */
/*   Updated: 2025/12/08 12:40:12 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :_rawBits(0)
{
	
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Fixed int constructor called" << std::endl;
	_rawBits = num << _fractionalBits;
}

int Fixed::toInt(void) const
{
	return (_rawBits >> _fractionalBits); // same as /256 in this case
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(num * (1 << _fractionalBits));
}

float Fixed::toFloat(void) const
{
	return ((float)_rawBits / (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}
void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}