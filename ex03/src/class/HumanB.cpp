/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:36:15 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:44:08 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :
_name(name),
_Weapon(NULL)
{}

HumanB::~HumanB(){}

Weapon const		*HumanB::getWeapon() const
{
	return this->_Weapon;
}

std::string const	&HumanB::getName() const
{
	return this->_name;
}

void		HumanB::setName(std::string name)
{
	this->_name = name;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;	
}

void	HumanB::attack() const
{
	if (!this->_Weapon)
		return ;
	std::cout << this->_name << " attacks with their "
	<< this->_Weapon->getType() << '\n';
}
