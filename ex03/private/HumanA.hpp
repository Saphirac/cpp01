/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:18:28 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/11 23:02:30 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
private :
	std::string	_name;
	Weapon		&_Weapon;
public :
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	Weapon		&getWeapon();
	std::string	&getName();
	void		setName(std::string name);
	void		setWeapon(Weapon &weapon);

	void	attack();
};

#endif
