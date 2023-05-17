/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:18:28 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:44:16 by mcourtoi         ###   ########.fr       */
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

	Weapon		const	&getWeapon() const;
	std::string const 	&getName() const;
	void				setName(std::string name);

	void	attack() const;
};

#endif
