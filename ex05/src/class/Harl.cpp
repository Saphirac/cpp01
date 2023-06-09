/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:31:36 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/15 17:42:48 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(){}

Harl::~Harl(){}

t_complain	Harl::__lookup[] = {
	{std::string("DEBUG"), &Harl::debug},
	{std::string("INFO"), &Harl::info},
	{std::string("WARNING"), &Harl::warning},
	{std::string("ERROR"), &Harl::error},
	{std::string(""), NULL}
};

void	Harl::debug() const
{
	std::cout << "[DEBUG]" << '\n'
	<< "These fries are too salty.\n";
}

void	Harl::info() const
{
	std::cout << "[INFO]" << '\n'
	<< "Can I have this discontinued item from 5 years ago? I swore someone gave it to me yesterday.\n";
}

void	Harl::warning() const
{
	std::cout << "[WARNING]" << '\n'
	<< "You're so dumb for messing up my 59 elements order!!!\n";
}

void	Harl::error() const
{
	std::cout << "[ERROR]" << '\n'
	<< "I WANT TO TALK TO YOUR MANAGER!!!!!!!!!!!!\n";
}

void	Harl::complain(std::string const &level) const
{
	size_t	i = 0;

	while (Harl::__lookup[i].func && Harl::__lookup[i].str.compare(level))
		i++;
	if (Harl::__lookup[i].func)
		(this->*Harl::__lookup[i].func)();
}
