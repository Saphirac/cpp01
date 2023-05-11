/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:23:43 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/11 22:35:45 by mcourtoi         ###   ########.fr       */
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

std::string	&Weapon::getType()
{
	return this->_type;
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}
