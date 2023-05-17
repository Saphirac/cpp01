/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 05:28:46 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:34:38 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	test = "HI THIS IS BRAIN";
	std::string	*stringPTR = &test;
	std::string	&stringREF = test;

	std::cout	<< 	"&test : " << &test << '\n';
	std::cout	<< 	"stringPTR : " << stringPTR << '\n';
	std::cout	<< 	"&stringREF : " << &stringREF << '\n';

	std::cout	<< 	"test : " << test << '\n';
	std::cout	<< 	"*stringPTR : " << *stringPTR << '\n';
	std::cout	<< 	"stringREF : " << stringREF << '\n';
	return 0;
}
