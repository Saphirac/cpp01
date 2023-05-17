/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 05:07:29 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:33:23 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(size_t n, std::string name)
{
	Zombie	*horde;
	
	horde = new Zombie[n];
	if (!horde)
		return NULL;
	for (size_t i = 0; i < n; ++i)
		horde[i].newName(name);
	return horde;
}
