/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:59:34 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/15 17:06:09 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int const ac, char const **av)
{
	Harl	Harl;
	if (ac != 2)
		return 1;
	Harl.complain(std::string(av[1]));
	return 0;
}
