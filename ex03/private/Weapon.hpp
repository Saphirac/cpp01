/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:14:50 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:44:31 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
private :
	std::string	_type;
public :
	Weapon();
	Weapon(std::string type);
	~Weapon();

	std::string const	&getType() const;
	void				setType(std::string type);
};

#endif
