/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmetic_operators.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:19:30 by fredchar          #+#    #+#             */
/*   Updated: 2025/12/08 16:01:35 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed Fixed::operator+(const Fixed& other)
{
	Fixed f;
	f.setRawBits(this->getRawBits() + other.getRawBits());
	return (f);
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed f;
	f.setRawBits(this->getRawBits() - other.getRawBits());
	return (f);
}

Fixed Fixed::operator*(const Fixed& other)
{
	Fixed f;
	f.setRawBits((this->getRawBits() * other.getRawBits()) >> _fractionalBits);
	return (f);
}

Fixed Fixed::operator/(const Fixed& other)
{
	Fixed f;
	f.setRawBits((this->getRawBits() << _fractionalBits) / other.getRawBits());
	return (f);
}
