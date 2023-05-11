/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 05:15:21 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/11 05:23:59 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

Zombie* zombieHorde(size_t n, std::string name);

int	main()
{
	Zombie	*horde;

	horde = zombieHorde(5, "Allo");
	if (!horde)
	{
		std::cerr << "Horde creation failed." << '\n';
		return EXIT_FAILURE;
	}
	for (size_t	i = 0; i < 5; ++i)
		horde[i].announce();
	delete[] horde;
	return EXIT_SUCCESS;
}
