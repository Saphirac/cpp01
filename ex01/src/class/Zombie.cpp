/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:24:26 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:31:37 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::Zombie()
{
	this->_name = "Sock";
}

Zombie::~Zombie(){}

void	Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << '\n';
}

void	Zombie::newName(std::string name)
{
	this->_name = name;
}
