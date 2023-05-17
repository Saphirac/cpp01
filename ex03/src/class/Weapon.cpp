/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:23:43 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:44:44 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "Basic *ss weapon";
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(){}

std::string const	&Weapon::getType() const
{
	return this->_type;
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}
