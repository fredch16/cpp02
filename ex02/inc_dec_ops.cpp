/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc_dec_ops.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:12:20 by fredchar          #+#    #+#             */
/*   Updated: 2025/12/08 16:52:48 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Operator	Return type	Why
// pre (++a)	Fixed&	Returns the modified object
// post (a++)	Fixed (by value)	Must return the old value as a copy

Fixed& Fixed::operator++()
{
	_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed f = *this;
	_rawBits++;
	return (f);
}

Fixed& Fixed::operator--()
{
	_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed f = *this;
	_rawBits--;
	return (f);
}