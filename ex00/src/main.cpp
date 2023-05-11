/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:47:39 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/11 05:02:33 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"

Zombie*	newZombie(std::string const name);
void	randomChump(std::string const name);

int	main()
{
	Zombie	*z0;
	Zombie	*z1;
	Zombie	test;

	z0 = newZombie("Uh");
	if (!z0)
	{
		std::cerr << "Zombie creation failed." << '\n';
		return EXIT_FAILURE;
	}
	z1 = newZombie("Oh");
	if (!z1)
	{
		delete z0;
		std::cerr << "Zombie creation failed." << '\n';
		return EXIT_FAILURE;
	}
	z0->announce();
	z1->announce();
	test.announce();
	randomChump("Ah");
	randomChump("Ih");
	delete z0;
	delete z1;
	return (EXIT_SUCCESS);
}
