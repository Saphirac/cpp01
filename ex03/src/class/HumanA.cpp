/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:29:29 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/11 23:03:22 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) :
_name(name),
_Weapon(weapon)
{}

HumanA::~HumanA(){}

Weapon	&HumanA::getWeapon()
{
	return this->_Weapon;
}

std::string	&HumanA::getName()
{
	return this->_name;
}

void		HumanA::setName(std::string name)
{
	this->_name = name;	
}

void		HumanA::setWeapon(Weapon &weapon)
{
	this->_Weapon = weapon;	
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their "
	<< this->_Weapon.getType() << '\n';
}
