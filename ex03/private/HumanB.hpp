/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:22:26 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/11 23:04:35 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
private :
	std::string	_name;
	Weapon		*_Weapon;
public :
	HumanB(std::string name);
	~HumanB();

	Weapon	*getWeapon();
	std::string	&getName();
	void		setName(std::string name);
	void		setWeapon(Weapon &weapon);

	void	attack();
};

#endif
