/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredchar <fredchar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:39:55 by fredchar          #+#    #+#             */
/*   Updated: 2025/12/08 18:53:10 by fredchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		~Point() = default;
		Point(const float x, const float y);
		Point(const Point& other);
		Point& operator=(const Point& other);
};