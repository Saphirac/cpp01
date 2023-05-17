/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:13:21 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:49:44 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

static inline std::string	__remplace(std::string tmp, std::string s1, std::string s2)
{
	size_t	i;

	i = tmp.find(s1.c_str(), 0, s1.length());
	while (i < std::string::npos)
	{
		tmp.erase(i, s1.length());
		tmp.insert(i, s2);
		i = tmp.find(s1.c_str(), i + s2.length(), s1.length());
	}
	return (tmp);
}

static inline std::string	__remplace(std::string tmp, std::string s1)
{
	size_t	i;

	i = tmp.find(s1.c_str(), 0, s1.length());
	while (i < std::string::npos)
	{
		tmp.erase(i, s1.length());
		i = tmp.find(s1.c_str(), i, s1.length());
	}
	return (tmp);
}

int	main(int const ac, char const **av)
{
	std::string			filename;
	std::ifstream		src;
	std::ofstream		dest;
	std::stringstream	tmp;

	if (ac < 3 || ac > 4 || !av[1][0] || !av[2][0])
	{
		std::cerr << "Wrong argument input.\n";
		return 1;
	}
	filename = av[1];
	src.open(filename.c_str());
	if (src.fail())
	{
		std::cerr << "Problem on opening file.\n";
		return 1;
	}
	dest.open(filename.append(".replace").c_str());
	if (dest.fail())
	{
		src.close();
		std::cerr << "Problem on opening file.\n";
		return 1;
	}
	tmp << src.rdbuf();
	if (av[3] && av[3][0])
		dest << __remplace(tmp.str(), std::string(av[2]), std::string(av[3]));
	else
		dest << __remplace(tmp.str(), std::string(av[2]));
	src.close();
	dest.close();
	return 0;
}
