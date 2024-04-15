/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:20:13 by hrinka            #+#    #+#             */
/*   Updated: 2024/04/15 19:59:07 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int		_value;
		static const int	_frac;
		
	public:
		/* Constructors & Destructoers */
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		Fixed(Fixed const &copy);

		/* Basic Operators */
		Fixed	&operator=(Fixed const &copy);
		Fixed	operator+(Fixed const &copy) const;
		Fixed	operator-(Fixed const &copy) const;
		Fixed	operator*(Fixed const &copy) const;
		Fixed	operator/(Fixed const &copy) const;
		bool	operator==(Fixed const &copy) const;
		bool	operator!=(Fixed const &copy) const;
		bool	operator<=(Fixed const &copy) const;
		bool	operator>=(Fixed const &copy) const;
		bool	operator<(Fixed const &copy) const;
		bool	operator>(Fixed const &copy) const;

		/* Other Operators */
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int value);
		Fixed	operator--(int value);

		/* Min and Max functions */
		static const Fixed	&min(Fixed const &copy1, Fixed const &copy2);
		static const Fixed	&max(Fixed const &copy1, Fixed const &copy2);

		/* Getters and setters */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		/* Conversion to int and float */
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif
