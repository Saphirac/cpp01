/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:31:36 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/15 17:43:09 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(){}

Harl::~Harl(){}

t_complain	Harl::__lookup[] = {
	{0, std::string("DEBUG"), &Harl::debug},
	{1, std::string("INFO"), &Harl::info},
	{2, std::string("WARNING"), &Harl::warning},
	{3, std::string("ERROR"), &Harl::error},
	{-1, std::string(""), NULL}
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
	size_t i = 0;

	for ( ; Harl::__lookup[i].func && Harl::__lookup[i].str.compare(level); i++);
	if (!Harl::__lookup[i].func)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return ;
	}
	switch (__lookup[i].lvl_number)
	{
		case 0 :
			this->debug();
		case 1 :
			this->info();
		case 2 :
			this->warning();
		case 3 :
			this->error();
	}
}
