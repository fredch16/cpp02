/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:39:28 by fredchar          #+#    #+#             */
/*   Updated: 2025/12/08 18:54:24 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

		// Point();
		// ~Point();
		// Point(const Point& other);
		// Point& operator=(const Point& other);

Point::Point() : _x(0), _y(0) {};

Point::Point(const Point& other)
{
	*this = other;
}

Point& Point::operator=(const Point& other)
{
	return (*this);
}